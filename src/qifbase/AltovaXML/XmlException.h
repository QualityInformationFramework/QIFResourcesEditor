////////////////////////////////////////////////////////////////////////
//
// XmlException.h
//
// This file was generated by XMLSpy 2016 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////

#pragma once

#include "AltovaXMLAPI.h"
#include "../Altova/AltovaException.h"

namespace altova {


class QIFBASE_EXPORT CXmlException : public CAltovaException
{
public:
	CXmlException(int nCode, const tstring& sMessage);
};


} // namespace altova

//#endif // ALTOVA_XMLEXCEPTION_H_INCLUDED
