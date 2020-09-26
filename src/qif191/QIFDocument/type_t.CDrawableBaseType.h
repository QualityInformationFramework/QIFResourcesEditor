#pragma once

#include "type_t.CNodeWithIdBaseType.h"


namespace qif191
{

namespace t
{	

class CDrawableBaseType : public ::qif191::t::CNodeWithIdBaseType
{
public:
	QIF191_EXPORT CDrawableBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDrawableBaseType(CDrawableBaseType const& init);
	void operator=(CDrawableBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDrawableBaseType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CDrawableBaseType_altova_Color, 0, 0> Color;	// Color CColorType

	MemberAttribute<double,_altova_mi_t_altova_CDrawableBaseType_altova_Transparency, 0, 0> Transparency;	// Transparency Cdouble

	MemberAttribute<bool,_altova_mi_t_altova_CDrawableBaseType_altova_Hidden, 0, 0> Hidden;	// Hidden Cboolean

	MemberAttribute<double,_altova_mi_t_altova_CDrawableBaseType_altova_Size, 0, 0> Size;	// Size CDoublePositiveType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDrawableBaseType
