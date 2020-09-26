#pragma once

#include "type_t.CWorkInstructionBaseType.h"


namespace qif191
{

namespace t
{	

class CImageInstructionType : public ::qif191::t::CWorkInstructionBaseType
{
public:
	QIF191_EXPORT CImageInstructionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CImageInstructionType(CImageInstructionType const& init);
	void operator=(CImageInstructionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CImageInstructionType); }
	MemberElement<t::CExternalFileReferenceType, _altova_mi_t_altova_CImageInstructionType_altova_ExternalFile> ExternalFile;
	struct ExternalFile { typedef Iterator<t::CExternalFileReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CImageInstructionType
