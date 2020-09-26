﻿// Copyright(c) Capvidia, 2020
// https://www.capvidia.com
//
// Permission is hereby granted, free of charge, to any person or organization obtaining a copy of the software
// and accompanying documentation covered by this license(the "Software") to use, reproduce, display, distribute, execute,
// and transmit the Software, and to prepare derivative works of the Software, and to permit third-parties to whom the Software
// is furnished to do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement,
// including the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and all derivative works of the Software,
// unless such copies or derivative works are solely in the form of machine-executable object code generated by a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT.
// IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

using System;
using System.Collections.Generic;
using System.Windows.Controls;
using System.Windows.Input;

namespace MeasurementResourceEditor
{
    /// <summary>
    /// TextBox derived control that allows only the input of valid double values.
    /// Can be set up to allow negative values or not.
    /// </summary>
    public class DoubleTextBox : TextBox
    {
        /// <summary> Constructor. </summary>
        public DoubleTextBox()
            : base()
        {
            AllowNegative = true;
        }

        /// <summary> Whether this DoubleTextBox allows negative double values or not. </summary>
        public bool AllowNegative { get; set; }

        /// <summary> Gets or sets the value entered into the TextBox, as a double. </summary>
        public double DoubleValue
        {
            get
            {
                try
                {
                    return Utilities.ParseDouble(Text);
                }
                catch (Exception)
                {
                    return 0;
                }
            }
            set { Text = value.ToString(); }
        }

        /// <summary> Previews the key that was pressed to make sure a Space is not entered. </summary>
        /// <param name="e"> Event arguments </param>
        protected override void OnPreviewKeyDown(KeyEventArgs e)
        {
            // Make sure the Key pressed was not a Space
            if (e.Key == Key.Space)
                e.Handled = true;

            base.OnPreviewKeyDown(e);
        }

        /// <summary> Preview event to test the text that has been entered. </summary>
        /// <param name="e"> Event arguments </param>
        protected override void OnPreviewTextInput(System.Windows.Input.TextCompositionEventArgs e)
        {
            // See what the string would look like if it were processed
            string textWithSelectionRemoved = Text.Remove(SelectionStart, SelectionLength);
            string proposedString = textWithSelectionRemoved.Insert(SelectionStart, e.Text);

            // Attempt to parse the value 
            bool parseSuccessful = Utilities.TryParseDouble(proposedString, out var value);
            if (AllowNegative)
            {
                // If we are allowing negative, we will only accept values that parse, or a "" or a "-".
                if (parseSuccessful == false && proposedString.Trim() != "" && proposedString.Trim() != "-" && proposedString.Trim() != ".")
                    e.Handled = true;
            }
            else
            {
                // If the value was negative, then don't accept it.
                if (parseSuccessful && value < 0)
                    e.Handled = true;

                // For non-negative values only, then we will only accept values that parse and ""
                if (parseSuccessful == false && proposedString.Trim() != "" && proposedString.Trim() != ".")
                    e.Handled = true;
            }

            base.OnPreviewTextInput(e);
        }

        /// <summary> Event handler to catch a Paste, or dragging text into the box. </summary>
        /// <param name="e"> Event arguments </param>
        protected override void OnTextChanged(TextChangedEventArgs e)
        {
            // Make sure new value is a double. We will also accept "" and ".", and even "-" if negatives are allowed for this control.
            if (!Utilities.TryParseDouble(Text, out var value))
            {
                if (AllowNegative)
                {
                    if ((Text.Trim() != "") && (Text.Trim() != "-") && (Text.Trim() != "."))
                        Text = "0";
                }
                else
                {
                    if (Text.Trim() != "" && (Text.Trim() != "."))
                        Text = "0";
                }
                return;
            }

            // If the value is negative and this control doesn't allow negatives, then make it positive.
            if (!AllowNegative)
            {
                // Make sure it is positive
                if (value < 0)
                {
                    Text = Math.Abs(value).ToString();
                    return;
                }
            }

            base.OnTextChanged(e);
        }

        /// <summary>
        /// Event Handler for losing focus on this control.  When this happens, let's first check to see if the 
        /// value is valid.  If not, make it a 0.
        /// </summary>
        /// <param name="e"> Event arguments </param>
        protected override void OnLostFocus(System.Windows.RoutedEventArgs e)
        {
            // Let's see if the value is valid.  If not, then set it to 0.
            if (!Utilities.TryParseDouble(Text, out var value))
                Text = "0";

            base.OnLostFocus(e);
        }
    }
}