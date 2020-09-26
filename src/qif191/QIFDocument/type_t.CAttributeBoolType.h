#pragma once

#include "type_t.CAttributeBaseType.h"


namespace qif191
{

namespace t
{	

class CAttributeBoolType : public ::qif191::t::CAttributeBaseType
{
public:
	QIF191_EXPORT CAttributeBoolType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAttributeBoolType(CAttributeBoolType const& init);
	void operator=(CAttributeBoolType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAttributeBoolType); }

	MemberAttribute<bool,_altova_mi_t_altova_CAttributeBoolType_altova_Value2, 0, 0> Value2;	// Value Cboolean
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAttributeBoolType
