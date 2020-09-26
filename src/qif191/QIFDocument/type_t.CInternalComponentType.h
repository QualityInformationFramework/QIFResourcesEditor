#pragma once

#include "type_t.CNodeBaseType.h"


namespace qif191
{

namespace t
{	

class CInternalComponentType : public ::qif191::t::CNodeBaseType
{
public:
	QIF191_EXPORT CInternalComponentType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInternalComponentType(CInternalComponentType const& init);
	void operator=(CInternalComponentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CInternalComponentType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CInternalComponentType_altova_Color, 0, 0> Color;	// Color CColorType

	MemberAttribute<double,_altova_mi_t_altova_CInternalComponentType_altova_Transparency, 0, 0> Transparency;	// Transparency Cdouble

	MemberAttribute<bool,_altova_mi_t_altova_CInternalComponentType_altova_Hidden, 0, 0> Hidden;	// Hidden Cboolean

	MemberAttribute<double,_altova_mi_t_altova_CInternalComponentType_altova_Size, 0, 0> Size;	// Size CDoublePositiveType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInternalComponentType
