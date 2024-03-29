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
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using Qif;

namespace MeasurementResourceEditor
{
    /// <summary> Interaction logic for CmmEditor.xaml. </summary>
    public partial class CmmEditor : UserControl
    {
        /// <summary> Default constructor. </summary>
        public CmmEditor()
        {
            InitializeComponent();
        }

        /// <summary> Sets a new CMM as the item being edited. </summary>
        /// <param name="cmm"></param>
        public void EditCmm(MeasurementResource cmm)
        {
            // Set the binding's DataContext for this control.
            DataContext = cmm;

            // Set the CMM Type image.  This is not data bound.
            UpdateCmmTypeButton();
        }

        /// <summary> Returns a reference to the CMM currently being edited. </summary>
        private CmmParameters CurrentCmm => DataContext == null ? null : (DataContext as MeasurementResource).Data as CmmParameters;

        /// <summary> Updates the CmmType image to be the one currently selected by the user. </summary>
        private void UpdateCmmTypeButton()
        {
            CmmType type = CurrentCmm.Type;

            // Update the text
            _cmmTypeName.Text = CmmTypeMethods.Name(type);

            // Update the image
            string uri = "pack://application:,,,/MeasurementResourceEditor;component/images/Cmm" + type.ToString() + ".png";
            BitmapImage bitmapImage = new BitmapImage();
            bitmapImage.BeginInit();
            bitmapImage.UriSource = new Uri(uri);
            bitmapImage.EndInit();
            _cmmTypeImage.Source = bitmapImage;
        }

        /// <summary> Button for setting the Type of CMM. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CmmTypeButton_Click(object sender, RoutedEventArgs e)
        {
            // Show the dialog
            CmmParameters cmm = CurrentCmm;
            CmmTypeSelector dialog = new CmmTypeSelector(Application.Current.MainWindow, cmm.Type);
            dialog.ShowDialog();

            // Set the value to what the user chose and update the image
            cmm.Type = dialog.SelectedCmmType;
            UpdateCmmTypeButton();
        }

        /// <summary> Drops a menu that allows the user to choose from some common expansion coefficients. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CommonExpansionCoefficients_Click(object sender, RoutedEventArgs e)
        {
            ContextMenu menu = new ContextMenu();
            menu.Items.Add(new MenuItem() { Header = "Steel\t\t 11.8" });
            menu.Items.Add(new MenuItem() { Header = "Glass\t\t 8.33" });
            menu.Items.Add(new MenuItem() { Header = "Glass, Pyrex\t 3.30" });
            menu.Items.Add(new MenuItem() { Header = "Zerodur\t\t 0.000" });
            foreach (MenuItem item in menu.Items)
                item.Click += CommonExpansionCoefficientMenuItem_Click;

            menu.PlacementTarget = this;
            menu.IsOpen = true;
        }

        /// <summary> Handler for when the drop-down menu that offers example expansion coefficients is clicked. </summary>
        /// <param name="sender"> Sender </param>
        /// <param name="e"> Event arguments </param>
        private void CommonExpansionCoefficientMenuItem_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            string menuItemChosen = (sender as MenuItem).Header as string;
            string[] tokens = menuItemChosen.Split('\t');
            string valueAsString = tokens[tokens.Length - 1];
            double value = Utilities.ParseDouble(valueAsString);
            (DataContext as MeasurementResource).CmmExpansionCoefficient = value;
        }
    }

    /// <summary> Private nested class that creates a list of all the types of CmmErrorIso10360.ArtifactPosition for the combo box. </summary>
    public class ArtifactPositionList
    {
        /// <summary> Default constructor. </summary>
        public ArtifactPositionList()
        {
            ArtifactTypes = new List<ArtifactPositionWrapper>();
            foreach (CmmErrorIso10360.ArtifactPosition pos in Enum.GetValues(typeof(CmmErrorIso10360.ArtifactPosition)))
                ArtifactTypes.Add(new ArtifactPositionWrapper(pos));
        }

        /// <summary> The list of artifact positions. </summary>
        public List<ArtifactPositionWrapper> ArtifactTypes { get; }
    }


    /// <summary> Private nested class that wraps CmmErrorIso10360.ArtifactPosition for display in the combo-box. </summary>
    public class ArtifactPositionWrapper
    {
        /// <summary> Constructor. </summary>
        /// <param name="position"> Artifact position </param>
        public ArtifactPositionWrapper(CmmErrorIso10360.ArtifactPosition position)
        {
            ArtifactPosition = position;
        }

        /// <summary> The underlying ArtifactPosition. </summary>
        public CmmErrorIso10360.ArtifactPosition ArtifactPosition { get; }

        /// <summary> The left portion of the string shown in the combo-box. </summary>
        public string LeftString
        {
            get
            {
                if (ArtifactPosition == CmmErrorIso10360.ArtifactPosition.Unknown)
                    return "Unknown";
                string str = ArtifactPosition.ToString();
                return str.Substring(1, 1);
            }
        }

        /// <summary> The right portion of the string shown in the combo-box. </summary>
        public string RightString
        {
            get
            {
                if (ArtifactPosition == CmmErrorIso10360.ArtifactPosition.Unknown)
                    return "";
                string str = ArtifactPosition.ToString();
                return str.Substring(3, 1);
            }
        }

        /// <summary> Returns a list of polylines that make up an arrow when put into a grid. </summary>
        public List<Polyline> Arrow
        {
            get
            {
                List<Polyline> list = new List<Polyline>();

                // If this is unknown, we don't want any arrow.
                if (ArtifactPosition == CmmErrorIso10360.ArtifactPosition.Unknown)
                    return list;

                // Determine which direction arrow we need
                string str = ArtifactPosition.ToString();
                if (str[2] == 'r')
                    return RightArrow;
                if (str[2] == 'c')
                    return CenterArrow;
                if (str[2] == 'l')
                    return LeftArrow;

                return null;
            }
        }

        /// <summary> Gets a list of lines that make up a right arrow when put in a grid </summary>
        private List<Polyline> RightArrow
        {
            get
            {
                Polyline p1 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p1.Points.Add(new Point(100, 50));
                p1.Points.Add(new Point(75, 25));
                Polyline p2 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p2.Points.Add(new Point(100, 50));
                p2.Points.Add(new Point(75, 75));
                Polyline p3 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p3.Points.Add(new Point(0, 50));
                p3.Points.Add(new Point(100, 50));
                p1.StrokeStartLineCap = p2.StrokeStartLineCap = p3.StrokeStartLineCap = PenLineCap.Round;
                p1.StrokeEndLineCap = p2.StrokeEndLineCap = p3.StrokeEndLineCap = PenLineCap.Round;
                List<Polyline> list = new List<Polyline>() { p1, p2, p3 };
                return list;
            }
        }

        /// <summary> Gets a list of lines that make up a two-directional arrow when put in a grid. </summary>
        private List<Polyline> CenterArrow
        {
            get
            {
                Polyline p1 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p1.Points.Add(new Point(100, 50));
                p1.Points.Add(new Point(75, 25));
                Polyline p2 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p2.Points.Add(new Point(100, 50));
                p2.Points.Add(new Point(75, 75));
                Polyline p3 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p3.Points.Add(new Point(0, 50));
                p3.Points.Add(new Point(100, 50));

                Polyline p4 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p4.Points.Add(new Point(0, 50));
                p4.Points.Add(new Point(25, 25));
                Polyline p5 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p5.Points.Add(new Point(0, 50));
                p5.Points.Add(new Point(25, 75));

                p1.StrokeStartLineCap = p2.StrokeStartLineCap = p3.StrokeStartLineCap = p4.StrokeStartLineCap = p5.StrokeStartLineCap = PenLineCap.Round;
                p1.StrokeEndLineCap = p2.StrokeEndLineCap = p3.StrokeEndLineCap = p4.StrokeEndLineCap = p5.StrokeEndLineCap = PenLineCap.Round;
                List<Polyline> list = new List<Polyline>() { p1, p2, p3, p4, p5 };
                return list;
            }
        }

        /// <summary> Gets a list of lines that make up a left arrow when put in a grid. </summary>
        private List<Polyline> LeftArrow
        {
            get
            {
                Polyline p1 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p1.Points.Add(new Point(0, 50));
                p1.Points.Add(new Point(25, 25));
                Polyline p2 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p2.Points.Add(new Point(0, 50));
                p2.Points.Add(new Point(25, 75));
                Polyline p3 = new Polyline() { Stroke = Brushes.Black, StrokeThickness = _arrowStrokeThickness };
                p3.Points.Add(new Point(0, 50));
                p3.Points.Add(new Point(100, 50));
                p1.StrokeStartLineCap = p2.StrokeStartLineCap = p3.StrokeStartLineCap = PenLineCap.Round;
                p1.StrokeEndLineCap = p2.StrokeEndLineCap = p3.StrokeEndLineCap = PenLineCap.Round;
                List<Polyline> list = new List<Polyline>() { p1, p2, p3 };
                return list;
            }
        }

        private const int _arrowStrokeThickness = 10;
    }


}
