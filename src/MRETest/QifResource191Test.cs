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
using Microsoft.VisualStudio.TestTools.UnitTesting;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;

using Qif_1_9_1;
using MeasurementResourceEditor;
using Qif;

namespace MRETest
{
    /// <summary> QIF 1.9.1 tests. </summary>
    [TestClass]
    public class QifResource191Test : BaseTest
    {
        /// <summary>
        /// A very simple test where a simple QIF file is loaded, then saved again,
        /// and the two files are then compared for equality.
        /// </summary>
        [TestMethod]
        public void LoadQifSaveQif()
        {
            var file_in = Path.Combine(TestFilePath, Qif191TestFiles, @"test_input.qif");
            var file_out = Path.Combine(TestFilePath, Qif191TestFiles, @"test_output.~.qif");

            // Load the simple QIF file
            var doc_load1 = new QifResourcesDocument(file_in);
            List<CmmParameters> cmmList = new List<CmmParameters>(doc_load1.Load());

            // Save as another QIF file with another name
            var doc_save1 = new QifResourcesDocument(file_out);
            doc_save1.Save(cmmList);

            // Make sure they are equal.
            Assert.IsTrue(AreFilesEqual(file_in, file_out), "Input and Output file are not equal");
        }

        /// <summary>
        /// Scenario:
        /// Load a MRD file
        /// Save to a QIF file
        /// Load the QIF file
        /// Compare two QIF files
        /// </summary>
        [TestMethod]
        public void LoadMrdSaveQifLoadQifSaveQif()
        {
            bool success;
            string mrd_in = Path.Combine(TestFilePath, MrdTestFiles, @"MrdV2.mrd");
            string file_out1 = Path.Combine(TestFilePath, MrdTestFiles, @"test_output1.~.qif");
            string file_out2 = Path.Combine(TestFilePath, MrdTestFiles, @"test_output2.~.qif");

            // Load the MRD file (has a bunch of resources).
            var doc1 = new MrdDocument(mrd_in, MrdDocument.DocumentType.MRD);
            Assert.IsNotNull(doc1, "Failed to load " + mrd_in);

            // Nullify the non-used CMM performance test data.
            foreach (CmmParameters cmm in doc1.CmmList)
                NullifyNonUsedProperties(cmm);

            // Save as a QIF file.
            success = doc1.SaveAs(file_out1, MrdDocument.DocumentType.QIF);
            Assert.IsTrue(success, "Failed to save as QIF");

            // Load the QIF file back in
            MrdDocument doc2 = new MrdDocument(file_out1, MrdDocument.DocumentType.QIF);
            List<CmmParameters> cmmList1 = doc1.CmmList;
            List<CmmParameters> cmmList2 = doc2.CmmList;
            Assert.IsTrue(Enumerable.SequenceEqual(cmmList1, cmmList2), $"Mismatch between original MRD file and QIF file");

            // Save the QIF file back out.
            success = doc2.SaveAs(file_out2, MrdDocument.DocumentType.QIF);
            Assert.IsTrue(success, "Failed to save as QIF, 2");

            // Make sure the 2 QIF files are equal.
            Assert.IsTrue(AreFilesEqual(file_out1, file_out2), "2 QIF files are not equal");
        }

        /// <summary> Resets some properties of CMM for further saving in QIF 3.0. </summary>
        /// <param name="cmm"> CMM </param>
        public void NullifyNonUsedProperties(CmmParameters cmm)
        {
            // Clear performance test data for perfect CMM, because in QIF 3.0 we consider the first test as active
            if (cmm.ActivePerformanceTest == CmmPerformanceTest.None)
            {
                cmm.Iso10360Results = new CmmErrorIso10360();
                cmm.B89Results = new CmmErrorB89();
            }

            // Reset artifact data since we do not store it in QIF 3.0
            var results = new CmmErrorIso10360(cmm.Iso10360Results);
            results.Artifact = CmmErrorIso10360.ArtifactType.GageBlocks;
            int n = cmm.Iso10360Results.ArtifactPositionCount;
            for (int i = 0; i < n; ++i)
            {
                results.ArtifactPositionValue(i, CmmErrorIso10360.ArtifactPosition.Unknown);
                results.GageBlockStackingValue(i, CmmErrorIso10360.GageBlockStacking.Left);
            }
            cmm.Iso10360Results = results;
        }

        private const string MrdTestFiles = "MRD";
        private const string Qif191TestFiles = "QIF.1.9.1";
    }
}
