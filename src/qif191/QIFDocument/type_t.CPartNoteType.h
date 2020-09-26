#pragma once

#include "type_t.CDrawableBaseType.h"


namespace qif191
{

namespace t
{	

class CPartNoteType : public ::qif191::t::CDrawableBaseType
{
public:
	QIF191_EXPORT CPartNoteType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPartNoteType(CPartNoteType const& init);
	void operator=(CPartNoteType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPartNoteType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPartNoteType_altova_Text> Text;
	struct Text { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CPartNoteType_altova_PartNoteIds> PartNoteIds;
	struct PartNoteIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPartNoteType
