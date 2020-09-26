using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MRETest
{
    /// <summary> Base class for test classes. </summary>
    public class BaseTest
    {
        /// <summary> Gets the full path to the TestFiles directory in this build. </summary>
        protected string TestFilePath => @"..\..\MRETest\TestFiles";

        /// <summary> Generates resulting file name by input file name. </summary>
        /// <param name="input"> Input file name </param>
        /// <returns> Resulting file name </returns>
        protected string GenerateResultFileName(string input)
        {
            var dir = Path.GetDirectoryName(input);
            var name = Path.GetFileNameWithoutExtension(input);
            var ext = Path.GetExtension(input);

            return Path.Combine(dir, $"{name}.~.result{ext}");
        }

        /// <summary> Generates etalon file name by input file name. </summary>
        /// <param name="input"> Input file name </param>
        /// <returns> Etalon file name </returns>
        protected string GenerateEtalonFileName(string input)
        {
            var dir = Path.GetDirectoryName(input);
            var name = Path.GetFileNameWithoutExtension(input);
            var ext = Path.GetExtension(input);

            return Path.Combine(dir, $"{name}.exam{ext}");
        }

        /// <summary>
        /// Examines resulting file by comparing it with the etalon file.
        /// Creates etalon file if it does not exist
        /// </summary>
        /// <param name="result"> Resulting file </param>
        /// <param name="exam"> Etalon file </param>
        /// <returns> True of resulting and etalon file are equal </returns>
        protected bool ExamineFile(string result, string exam)
        {
            if (!File.Exists(result))
                throw new Exception("Resulting file is not found");

            if (!File.Exists(exam))
            {
                File.Copy(result, exam);
                return true;
            }

            return AreFilesEqual(exam, result);
        }

        /// <summary> Compares the two given files and returns true if they are equal. </summary>
        /// <param name="f1"> The first file </param>
        /// <param name="f2"> The second file </param>
        /// <returns> True if files are equal, otherwise false </returns>
        protected bool AreFilesEqual(string f1, string f2)
        {
            string s1 = File.ReadAllText(f1);
            string s2 = File.ReadAllText(f2);
            return string.Equals(s1, s2);
        }
    }
}
