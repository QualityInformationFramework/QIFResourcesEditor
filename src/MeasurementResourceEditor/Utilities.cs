using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MeasurementResourceEditor
{
    /// <summary> Class with auxiliary functions </summary>
    static class Utilities
    {
        /// <summary> Parses double independently on current culture. </summary>
        /// <param name="s"> String to parse </param>
        /// <param name="result"> Parsed value </param>
        /// <returns> True in case of success, otherwise false </returns>
        public static bool TryParseDouble(string s, out double result)
        {
            return double.TryParse(s, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out result);
        }

        /// <summary> Parses double independently on current culture. </summary>
        /// <param name="s"> String to parse </param>
        /// <returns> Parsed value </returns>
        public static double ParseDouble(string s)
        {
            return double.Parse(s, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture);
        }
    }
}
