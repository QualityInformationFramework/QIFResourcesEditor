﻿///////////////////////////////////////////////////////////////////////////////
///
/// Copyright 2018-2020, Capvidia, Metrosage, and project contributors
/// https://www.capvidia.com/
/// 
/// This software is provided for free use to the QIF Community under the 
/// following license:
/// 
/// Boost Software License - Version 1.0 - August 17th, 2003
/// https://www.boost.org/LICENSE_1_0.txt
/// 
/// Permission is hereby granted, free of charge, to any person or organization
/// obtaining a copy of the software and accompanying documentation covered by
/// this license (the "Software") to use, reproduce, display, distribute,
/// execute, and transmit the Software, and to prepare derivative works of the
/// Software, and to permit third-parties to whom the Software is furnished to
/// do so, all subject to the following:
/// 
/// The copyright notices in the Software and this entire statement, including
/// the above license grant, this restriction and the following disclaimer,
/// must be included in all copies of the Software, in whole or in part, and
/// all derivative works of the Software, unless such copies or derivative
/// works are solely in the form of machine-executable object code generated by
/// a source language processor.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
/// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
/// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
/// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
/// DEALINGS IN THE SOFTWARE.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.IO;
using System.Windows.Controls.Ribbon;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.Diagnostics;

using log4net;
using MeasurementResourceEditor.MrdXml;
using Qif_1_9_1;
using Qif;

namespace MeasurementResourceEditor
{
    /// <summary> Interaction logic for MainWindow.xaml </summary>
    public partial class MainWindow : RibbonWindow
    {
        /// <summary> Recent list limitation. </summary>
        const int MAX_MRU_LIST_COUNT = 8;

        /// <summary> Logger. </summary>
        private static readonly ILog log = LogManager.GetLogger(typeof(MainWindow));

        /// <summary> Default constructor. </summary>
        public MainWindow()
        {
            // Start the logger
            StartLog4Net();

            // Load the window
            InitializeComponent();

            // Load the saved settings to restore window size
            this.Top = Properties.Settings.Default.Top;
            this.Left = Properties.Settings.Default.Left;
            this.Height = Properties.Settings.Default.Height;
            this.Width = Properties.Settings.Default.Width;
            this.WindowState = Properties.Settings.Default.WindowState;

            // Connect to events
            _treeView.SelectionChanged += MrdTreeView_SelectionChanged;

            // Set up the clipboard
            _clipboard = null;

            log.Debug("Main window construction complete");
        }

        #region ++++ Window Event Handlers ++++

        /// <summary> This window's Loaded event handler </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            log.Debug("Main window loading begin");

            // Get the screen coordinates and test if this window lies on the screen 
            List<Rect> screens = new List<Rect>();
            var converter = new ScreenBoundsConverter(this);
            foreach (var screen in System.Windows.Forms.Screen.AllScreens)
            {
                Rect bounds = converter.ConvertBounds(screen.Bounds);
                screens.Add(bounds);
            }
            if (!IsWindowIsOnScreen(screens))
            {
                // If it is not on the screen (or the "restore" state isn't on screen), then move it
                Top = Left = 100;
                Width = 800;
                Height = 600;
            }

            // Populate the MRU file menu
            SetMRUMenuToMRDListProperties();
            log.Debug("Main window loading complete");
        }

        /// <summary> Event triggered when the window is closing. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void Window_Closing(object sender, System.ComponentModel.CancelEventArgs e)
        {
            log.Debug("Main window closing, saving window state");

            // If the _viewHost is not collapsed, save the width of the tree view column
            if (_viewHost.Visibility != Visibility.Collapsed)
            {
                Properties.Settings.Default.TreeWidth = _viewHost.ColumnDefinitions[0].Width.Value;
            }

            // Save the location and state of the window before we close it so we can restore it next time.
            Properties.Settings.Default.WindowState = WindowState == WindowState.Minimized ? WindowState.Normal : this.WindowState;
            if (WindowState == WindowState.Maximized)
            {
                // Use the RestoreBounds as the current values will be 0, 0 and the size of the screen
                Properties.Settings.Default.Top = RestoreBounds.Top;
                Properties.Settings.Default.Left = RestoreBounds.Left;
                Properties.Settings.Default.Height = RestoreBounds.Height;
                Properties.Settings.Default.Width = RestoreBounds.Width;
            }
            else
            {
                Properties.Settings.Default.Top = Top;
                Properties.Settings.Default.Left = Left;
                Properties.Settings.Default.Height = Height;
                Properties.Settings.Default.Width = Width;
            }
            Properties.Settings.Default.Save();
        }
        #endregion

        #region ++++ Ribbon Event Handlers ++++

        /// <summary> Handler for event raised when this window has finished loading. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void MainWindow_Loaded(object sender, RoutedEventArgs e)
        {
            // Check to see if there was a command line argument to load a file.
            if (Application.Current.Properties["FileToLoad"] != null)
            {
                string filename = Application.Current.Properties["FileToLoad"].ToString();
                bool success = LoadFile(filename);
                if (success)
                    UpdateMRDListProperties(filename);
            }
        }

        /// <summary> Event handler for the user clicking on the MRU file list in the menu. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void MruMenu_SelectionChanged(object sender, RoutedPropertyChangedEventArgs<object> e)
        {
            log.Debug("Loading file " + e.NewValue);
            bool success = LoadFile((e.NewValue as FileInfo).FullName);
            if (success)
                UpdateMRDListProperties((e.NewValue as FileInfo).FullName);
        }

        /// <summary> Executes the "New" command. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void New_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            // Create the new document.
            NewFile();

            // If we opened a document, then let's start off with a new CMM
            if (IsDocumentOpen)
                CreateNewCmm();
        }

        /// <summary> Determines if the "New" command can execute. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void New_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = !IsDocumentOpen;
        }

        /// <summary> Opens a file. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void Open_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            // Create an open file dialog to open an MRD XML file.
            var openDialog = new Microsoft.Win32.OpenFileDialog
            {
                Filter = ResourceFileFilter,
                Title = "Open a resource file",
                CheckFileExists = true
            };

            // Launch the dialog, and if success, load the file.
            bool? success = openDialog.ShowDialog();
            if ((bool)success)
            {
                log.Debug("Loading file " + openDialog.FileName);
                bool loadSuccess = LoadFile(openDialog.FileName);
                if (loadSuccess)
                    UpdateMRDListProperties(openDialog.FileName);
            }
        }

        /// <summary> Determines if we can open a file. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void Open_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = (IsDocumentOpen == false);
        }

        /// <summary> Executes the "Save" command. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void Save_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            // Save the file
            if (Document.XmlFilename == null)
                SaveFileAs();
            else
                SaveFile();

            // Add this file to the MRU list.
            if (Document.XmlFilename != null)
                UpdateMRDListProperties(Document.XmlFilename);
        }

        /// <summary> Determines if we can do a "Save" or "Save As". </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void Save_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = IsDocumentOpen;
        }

        /// <summary> Executes the "Save As" command. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void SaveAs_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            SaveFileAs();

            // Add this file to the MRU list.
            if (Document.XmlFilename != null)
                UpdateMRDListProperties(Document.XmlFilename);
        }

        /// <summary> Handles the Close command. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void Close_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            // Eventually will end up in OnClosing() and Window_Closing()
            Application.Current.Shutdown();
        }

        /// <summary> Event that is raised when a new node is selected in the TreeView. </summary>
        /// <param name="sender"></param>
        /// <param name="newlySelectedNode"></param>
        private void MrdTreeView_SelectionChanged(object sender, TreeNode newlySelectedNode)
        {
            ChangeSelectedResource(newlySelectedNode);
        }

        /// <summary> Determines if we can execute the routed command UpdateTreeViewNodeNames.  This command is always possible. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void UpdateTreeViewNodeNames_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = true;
        }

        /// <summary> A command that updates the names of items in the MRD tree view. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void UpdateTreeViewNodesNames_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            _treeView.RefreshTreeNodes();
        }

        /// <summary> Determines if we can create a new CMM at this moment. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CreateNewCmm_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = IsDocumentOpen;
        }

        /// <summary> Creates a new CMM with default values. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CreateNewCmm_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            CreateNewCmm();
        }

        /// <summary> Determines if we can create a new Sensor at this moment. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CreateNewSensor_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = false;
            if (IsDocumentOpen)
            {
                TreeNode selectedNode = _treeView.SelectedNode;
                if (selectedNode != null && selectedNode.IsCmm)
                {
                    e.CanExecute = true;
                }
            }
        }

        /// <summary> Creates a new Sensor with default values. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CreateNewSensor_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            CreateNewSensorOnSelectedCmm();
        }

        /// <summary> Handles the CanExecute for the command to delete the selected measurement resource. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void DeleteMeasurementResource_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = false;
            if (IsDocumentOpen && _treeView.SelectedNode != null)
                e.CanExecute = true;
        }

        /// <summary> Handles the command to delete the selected measurement resource. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void DeleteMeasurementResource_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            DeleteMeasurementResource();
        }

        /// <summary> Determines if the CopyMeasurementResource command can execute. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CopyMeasurementResource_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = IsDocumentOpen && (_treeView.SelectedNode != null);
        }

        /// <summary> Executes the CopyMeasurementResource command. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CopyMeasurementResource_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            CopyMeasurementResource(false);
        }

        /// <summary> Determines if the CopyMeasurementResourceAndChildren command can execute. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CopyMeasurementResourceAndChildren_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = IsDocumentOpen && (_treeView.SelectedNode != null) && _treeView.SelectedNode.IsCmm;
        }

        /// <summary> Executes the CopyMeasurementResourceAndChildren command. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CopyMeasurementResourceAndChildren_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            CopyMeasurementResource(true);
        }

        /// <summary> Determines if the PasteMeasurementResource command can execute. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void PasteMeasurementResource_CanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = false;
            if (_clipboard != null)
            {
                // If it is a CMM, then we can paste.
                if (_clipboard is CmmParameters)
                {
                    e.CanExecute = true;
                }
                else
                {
                    // If it is a sensor in the clipboard and a CMM is selected, then we can paste.
                    if (_treeView.SelectedNode != null && _treeView.SelectedNode.IsCmm)
                    {
                        e.CanExecute = true;
                    }
                }
            }
        }

        /// <summary> Executes the PasteMeasurementResource command. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void PasteMeasurementResource_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            PasteMeasurementResource();
        }
        #endregion

        #region Properties
        /// <summary> Gets or sets the active document, if any. </summary>
        public MrdDocument Document
        {
            get { return _document; }
            set
            {
                // Set it locally
                _document = value;

                // And send the document down to the UI children as well
                _treeView.Document = _document;

                // Make sure the view is visible
                _viewHost.Visibility = Visibility.Visible;
                _viewHost.ColumnDefinitions[0].Width = new GridLength(Properties.Settings.Default.TreeWidth);
            }
        }

        /// <summary> Determines if a document is open. </summary>
        public bool IsDocumentOpen
        {
            get
            {
                if (Document == null)
                    return false;
                else
                    return true;
            }
        }
        #endregion

        #region ---- private methods ----

        /// <summary> Deletes the currently selected Measurement Resource.  If it is a CMM, it deletes all attached sensors too.. </summary>
        private void DeleteMeasurementResource()
        {
            TreeNode selectedNode = _treeView.SelectedNode;

            // Show a confirmation dialog
            string message;
            string header = selectedNode.IsCmm ? "Delete CMM" : "Delete Sensor";
            if (selectedNode.IsCmm)
                message = "Are you sure that you want to delete the CMM: \n\t\'" + selectedNode.Name + "\' \nAND all attached sensors?";
            else
                message = "Are you sure that you want to delete the Sensor: \'" + selectedNode.Name + "\'?";
            MessageBoxResult result = MessageBox.Show(message, header, MessageBoxButton.YesNo, MessageBoxImage.Question);

            // Delete the node
            if (result == MessageBoxResult.Yes)
            {
                // In case the clipboard contained this deleted node, clear it.
                if (_clipboard == selectedNode.Data)
                    _clipboard = null;

                // Delete the item
                Document.DeleteMeasurementResource(selectedNode);

                // If we deleted the last CMM node, then there will be an empty tree, but a selected node changed event won't fire.
                // So we need to make sure that we clear the resource editor pane manually.
                if (_treeView.SelectedNode == null)
                    ChangeSelectedResource(null);
            }
        }

        /// <summary> Updates the resource being viewed in the Resource Viewer. </summary>
        /// <param name="newlySelectedNode"></param>
        private void ChangeSelectedResource(TreeNode newlySelectedNode)
        {
            // If the tree is empty because of deleting the last CMM, then we will get a null value here.
            if (newlySelectedNode == null)
            {
                _cmmEditor.Visibility = Visibility.Collapsed;
                _sensorEditor.Visibility = Visibility.Collapsed;
                return;
            }

            // Otherwise, show the appropriate dialog with the correct data.
            if (newlySelectedNode.Data is SensorParameters)
            {
                CmmParameters owningCmm = newlySelectedNode.ParentNode.Data as CmmParameters;
                MeasurementResource resource = new MeasurementResource(newlySelectedNode.Data as SensorParameters, owningCmm);
                _cmmEditor.Visibility = Visibility.Collapsed;
                _sensorEditor.Visibility = Visibility.Visible;
                _sensorEditor.EditSensor(resource);
            }
            else if (newlySelectedNode.Data is CmmParameters)
            {
                MeasurementResource resource = new MeasurementResource(newlySelectedNode.Data as CmmParameters);
                _cmmEditor.Visibility = Visibility.Visible;
                _cmmEditor.EditCmm(resource);
                _sensorEditor.Visibility = Visibility.Collapsed;
            }
            else throw new InvalidOperationException();
        }

        /// <summary> Creates a new empty document and loads it. </summary>
        private void NewFile()
        {
            MrdDocument doc = new MrdDocument();
            Document = doc;
        }

        /// <summary> Opens the given MRD XML file for editing. </summary>
        /// <param name="filename"> File name </param>
        /// <returns> True in case of success, otherwise false </returns>
        private bool LoadFile(string filename)
        {
            // Make sure this is a known file extension
            if (!IsValidFileExtension(filename))
            {
                string message = "Error loading file: " + filename + "\n";
                message += "Unknown file extension \"" + System.IO.Path.GetExtension(filename) + "\".";
                MessageBox.Show(message, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                return false;
            }

            try
            {
                // Try to open the MRD file
                MrdDocument doc = new MrdDocument(filename, MrdDocument.GetDocumentType(filename));
                if (doc == null)
                    return false;

                // Set this successfully loaded file as the document in the 
                Document = doc;
            }
            catch (Exception ex)
            {
                // If it fails, show a message
                string message = "Error loading file \"" + filename + "\": \n\n" + ex.Message;
                if (ex.InnerException != null)
                    message += "\n" + ex.InnerException.Message;
                if (message.Split('\n').Length > 30)
                {
                    // If the message is more than 30 lines, write it to a file on the desktop.
                    string errorPath = Environment.GetFolderPath(Environment.SpecialFolder.Desktop) + "\\Measurement Resource Editor error log.txt";
                    try
                    {
                        File.WriteAllText(errorPath, message);
                        MessageBox.Show("Error loading file \"" + filename + "\": \n\nError log written to file: " + errorPath, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                    }
                    catch (Exception ex2)
                    {
                        if (ex2 is UnauthorizedAccessException || ex2 is IOException)
                        {
                            MessageBox.Show("Error loading file \"" + filename + "\": \n\nTh error log could *not* be written to file: " + errorPath, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                        }
                        else throw ex2;
                    }
                }
                else
                {
                    // If it is short enough, just show a message box
                    MessageBox.Show(message, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                }
                return false;
            }
            return true;
        }

        /// <summary> Saves the current data to the MRD XML file. </summary>
        private void SaveFile()
        {
            // In case the item with focus is a textbox, then we need to update its binding. This is because it doesn't lose focus on being clicked
            UpdateFocusedTextboxBinding();

            // Save the file.
            Document.Save();
        }

        /// <summary> Saves the current data to the an MRD XML file, and makes that file the active save file for this session. </summary>
        private void SaveFileAs()
        {
            // In case the item with focus is a textbox, then we need to update its binding.  This is because it doesn't lose focus on being clicked
            UpdateFocusedTextboxBinding();

            // Create a save file dialog to save the new MRD XML file
            Microsoft.Win32.SaveFileDialog dialog = new Microsoft.Win32.SaveFileDialog();
            dialog.Filter = ResourceFileFilter;
            dialog.Title = "Save Resource File As";

            // Launch the dialog, and if success, save the file out to that location.
            bool? success = dialog.ShowDialog();
            if ((bool)success)
            {
                // Make sure that the file extension either ends with QIF or MRD. If not, then just add a ".qif" to the end and we will save as QIF.
                string filename = dialog.FileName;
                if (!IsValidFileExtension(filename))
                    filename += ".qif";

                // Save the file.
                Document.SaveAs(filename, MrdDocument.GetDocumentType(filename));
            }
        }

        /// <summary> Sets the values in the MRD Menu to the list of values found in the MRD Files Property settings. </summary>
        private void SetMRUMenuToMRDListProperties()
        {
            ObservableCollection<FileInfo> mruList = new ObservableCollection<FileInfo>();
            _mruMenu.ItemsSource = mruList;
            if (Properties.Settings.Default.MRUFiles != null)
            {
                foreach (string s in Properties.Settings.Default.MRUFiles)
                {
                    FileInfo file = new FileInfo(s);
                    if (file.Exists)
                        mruList.Add(file);
                }
            }
        }

        /// <summary> Updates the MRD List application property and saves out the properties. </summary>
        /// <param name="newlyLoadedFilename"></param>
        private void UpdateMRDListProperties(string newlyLoadedFilename)
        {
            // Create a new MRD list with the new file at the top.
            StringCollection mru = new StringCollection
            {
                newlyLoadedFilename
            };

            // Add the remainder of the files in the current menu, up to the max count.
            for (int i = 0; i < MAX_MRU_LIST_COUNT - 1; i++)
            {
                if (!(_mruMenu.ItemsSource is ObservableCollection<FileInfo> fileList) || fileList.Count <= i)
                    break;
                if (mru.Contains(fileList[i].FullName) == false)
                    mru.Add(fileList[i].FullName);
            }
            Properties.Settings.Default.MRUFiles = mru;

            // Save the properties out.
            Properties.Settings.Default.Save();
        }

        /// <summary> Gets the file filter string for MRD files that is used by the Open and Save file dialogs. </summary>
        private string ResourceFileFilter
        {
            get
            {
                return "Quality Information Framework Files (QIF) (*." + MrdDocument.QifFileExtension + ")|*." + MrdDocument.QifFileExtension +
                         "|MRD Files (*." + MrdDocument.MrdFileExtension + ")|*." + MrdDocument.MrdFileExtension;
            }
        }

        /// <summary> Determines if the given filename has a valid file extension for saving. </summary>
        /// <param name="filename"> File name </param>
        /// <returns> True if the extension is valid for saving. </returns>
        private bool IsValidFileExtension(string filename)
        {
            // See if it has the QIF file extension
            if (string.Compare(System.IO.Path.GetExtension(filename), "." + MrdDocument.QifFileExtension, true) == 0)
                return true;

            // See if it has the MRD file extension
            if (string.Compare(System.IO.Path.GetExtension(filename), "." + MrdDocument.MrdFileExtension, true) == 0)
                return true;

            // If not, this is an invalid extension.
            return false;
        }

        /// <summary> Creates a new CMM with default values. </summary>
        private void CreateNewCmm()
        {
            // Create the new CMM
            CmmParameters cmm = CmmParameters.CreateNewCmmParameters();
            cmm.Name = Document.GetNewCmmName();

            // Add it to our document
            TreeNode newNode = Document.AddCmm(cmm);
            newNode.IsSelected = true;
        }

        /// <summary> Creates a new Sensor with default values that is attached to the currently selected CMM. </summary>
        private void CreateNewSensorOnSelectedCmm()
        {
            // Get the selected node
            TreeNode selectedNode = _treeView.SelectedNode;

            // Create the new sensor
            SensorParameters sensor = SensorParameters.CreateNewSensorParameters();
            sensor.Name = Document.GetNewSensorName(selectedNode.Data as CmmParameters);

            // Add it to our document
            TreeNode newNode = Document.AddSensorToCmmNode(sensor, selectedNode);
            selectedNode.IsExpanded = true;
            newNode.IsSelected = true;
        }

        /// <summary> Copies the selected measurement resources to the clipboard. </summary>
        /// <param name="includeChildren"> Indicates whether we are just copying the CMM or the child Sensors as well. </param>
        private void CopyMeasurementResource(bool includeChildren)
        {
            // In case the item with focus is a textbox, then we need to update its binding.  This is because it doesn't lose focus on being clicked
            UpdateFocusedTextboxBinding();

            // "Copy" the item
            _clipboard = _treeView.SelectedNode.Data;
            _clipboardIncludesChildren = includeChildren;

            // Update the Paste button a bit to reflect what is in the clipboard
            if (_clipboard is CmmParameters)
            {
                _pasteButton.Label = "Paste CMM";
                if (includeChildren)
                    _pasteButton.ToolTip = "Paste the CMM: \'" + (_clipboard as CmmParameters).Name + "\' and its Sensors to the top of the tree";
                else
                    _pasteButton.ToolTip = "Paste the CMM: \'" + (_clipboard as CmmParameters).Name + "\' to the top of the tree";
            }
            else
            {
                _pasteButton.Label = "Paste Sensor";
                _pasteButton.ToolTip = "Paste the Sensor: \'" + (_clipboard as SensorParameters).Name + "\' to the currently selected CMM";
            }
        }

        /// <summary> Pastes the contents of the clipboard to the tree. </summary>
        private void PasteMeasurementResource()
        {
            if (_clipboard is CmmParameters)
            {
                CmmParameters copy = CmmParameters.CreateNewCmmParameters(_clipboard as CmmParameters);
                if (!_clipboardIncludesChildren)
                    copy.ClearSensorList();
                copy.Name = "Copy of " + copy.Name;
                TreeNode newNode = Document.AddCmm(copy);
                newNode.IsSelected = true;
            }
            else
            {
                TreeNode selectedNode = _treeView.SelectedNode;
                Debug.Assert(selectedNode != null && selectedNode.IsCmm);
                SensorParameters copy = SensorParameters.CreateNewSensorParameters(_clipboard as SensorParameters);
                copy.Name = "Copy of " + copy.Name;
                TreeNode newNode = Document.AddSensorToCmmNode(copy, selectedNode);
                //(newNode.Data as SensorParameters).Name = "Copy of " + (newNode.Data as SensorParameters).Name;
                selectedNode.IsExpanded = true;
                newNode.IsSelected = true;
            }
        }

        /// <summary>
        /// Starts the log4net logger and initializes it
        /// For more information, see:
        /// http://logging.apache.org/log4net/release/manual/introduction.html
        /// </summary>
        private void StartLog4Net()
        {
            // Load the XML configuration file for the logger.
            log4net.Config.XmlConfigurator.Configure(new FileInfo(MeasurementResourceEditorOptions.Instance.Log4NetConfigFilePath));

            // Print the initial log entry
            log.Info("Starting Measurement Resource Editor");
        }

        /// <summary> Determines if this Window lies entirely in a single screen. </summary>
        /// <param name="screens"></param>
        /// <returns></returns>
        private bool IsWindowIsOnScreen(List<Rect> screens)
        {
            foreach (Rect s in screens)
            {
                // If it lies entirely in this screen, then we will say it is good.
                if ((s.Top <= Top) && (s.Left <= Left) && (s.Right >= Left + Width) && (s.Bottom >= Top + Height))
                {
                    return true;
                }
            }

            // If it didn't lie entirely in either screen, then we will say no.
            return false;
        }

        /// <summary>
        /// In case the item with focus is a textbox, then this will update its binding.  This is because it doesn't lose focus 
        /// when certain important events happen like clicking a button.
        /// </summary>
        private void UpdateFocusedTextboxBinding()
        {
            // In case the item with focus is a textbox, then we need to update its binding.  This is because it doesn't lose focus on being clicked
            if (Keyboard.FocusedElement is TextBox focusedTextBox)
            {
                BindingExpression bindingExpression = focusedTextBox.GetBindingExpression(TextBox.TextProperty);
                if (bindingExpression != null)
                    bindingExpression.UpdateSource();
            }
        }
        #endregion

        #region ---- private fields ----

        /// <summary> MRD document </summary>
        private MrdDocument _document;

        // This will be either a CmmParameters or a SensorParameters
        private object _clipboard;
        private bool _clipboardIncludesChildren;
        #endregion
    }
}
