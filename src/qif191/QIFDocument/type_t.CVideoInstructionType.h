#pragma once

#include "type_t.CWorkInstructionBaseType.h"


namespace qif191
{

namespace t
{	

class CVideoInstructionType : public ::qif191::t::CWorkInstructionBaseType
{
public:
	QIF191_EXPORT CVideoInstructionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CVideoInstructionType(CVideoInstructionType const& init);
	void operator=(CVideoInstructionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CVideoInstructionType); }
	MemberElement<t::CExternalFileReferenceType, _altova_mi_t_altova_CVideoInstructionType_altova_ExternalFile> ExternalFile;
	struct ExternalFile { typedef Iterator<t::CExternalFileReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CVideoInstructionType
