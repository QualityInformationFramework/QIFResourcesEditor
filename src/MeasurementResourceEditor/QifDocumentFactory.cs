using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace MeasurementResourceEditor
{
    /// <summary> Creates QIF documents depending on version. </summary>
    class QifDocumentFactory
    {
        /// <summary> Creates a QIF document instance from the specified file. </summary>
        /// <param name="path"> File path </param>
        /// <returns> QIF document interface </returns>
        public Qif.IResourcesDocument CreateDocument(string path)
        {
            var version = ReadQifVersion(path);
            if (version == null)
                throw new Exception("Failed to read the version of the QIFDocument");

            if (version.Item1 < 2)
                return new Qif_1_9_1.QifResourcesDocument(path);
            else if (version.Item1 == 3)
                return new Qif300.QifResourcesDocument(path);

            throw new Exception($"Unsupported version of QIF document: {version.Item1}.{version.Item2}.{version.Item3}");
        }

        /// <summary> Reads version of the specified QIF file. </summary>
        /// <param name="path"> File path </param>
        /// <returns> Version </returns>
        private static Tuple<int, int, int> ReadQifVersion(string path)
        {
            using (var sr = new StreamReader(path))
            {
                using (var xr = XmlReader.Create(sr))
                {
                    if (xr.MoveToContent() == XmlNodeType.Element && xr.Name == "QIFDocument")
                        return ParseVersion(xr.GetAttribute("versionQIF"));
                }
            }
            return null;
        }

        /// <summary> Parses version from the specified string. </summary>
        /// <param name="val"> String to parse </param>
        /// <returns> Three version numbers </returns>
        private static Tuple<int, int, int> ParseVersion(string val)
        {
            if (string.IsNullOrEmpty(val))
                return null;

            var numbers = val.Split('.');
            if (numbers.Length != 3)
                return null;

            var v = new int[3];
            for (int i = 0; i < 3; ++i)
            {
                if (!int.TryParse(numbers[i], out v[i]))
                    return null;
            }

            return new Tuple<int, int, int>(v[0], v[1], v[2]);
        }
    }
}
