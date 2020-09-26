#pragma once

#include "type_t.CAuxiliaryPlaneBaseType.h"


namespace qif191
{

namespace t
{	

class CPlaneClippingType : public ::qif191::t::CAuxiliaryPlaneBaseType
{
public:
	QIF191_EXPORT CPlaneClippingType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneClippingType(CPlaneClippingType const& init);
	void operator=(CPlaneClippingType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneClippingType); }

	MemberAttribute<__int64,_altova_mi_t_altova_CPlaneClippingType_altova_Index, 0, 0> Index;	// Index Cinteger

	MemberAttribute<bool,_altova_mi_t_altova_CPlaneClippingType_altova_Enable, 0, 0> Enable;	// Enable Cboolean
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneClippingType
