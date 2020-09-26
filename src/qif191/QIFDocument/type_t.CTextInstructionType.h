#pragma once

#include "type_t.CWorkInstructionBaseType.h"


namespace qif191
{

namespace t
{	

class CTextInstructionType : public ::qif191::t::CWorkInstructionBaseType
{
public:
	QIF191_EXPORT CTextInstructionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTextInstructionType(CTextInstructionType const& init);
	void operator=(CTextInstructionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTextInstructionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CTextInstructionType_altova_TextInstruction> TextInstruction;
	struct TextInstruction { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTextInstructionType
