#pragma once

#include "type_t.CDrawableBaseType.h"


namespace qif191
{

namespace t
{	

class CLayerType : public ::qif191::t::CDrawableBaseType
{
public:
	QIF191_EXPORT CLayerType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLayerType(CLayerType const& init);
	void operator=(CLayerType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLayerType); }

	MemberAttribute<bool,_altova_mi_t_altova_CLayerType_altova_ApplyColor, 0, 0> ApplyColor;	// ApplyColor Cboolean

	MemberAttribute<unsigned,_altova_mi_t_altova_CLayerType_altova_Index, 0, 0> Index;	// Index CunsignedInt
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CLayerType_altova_ElementIds> ElementIds;
	struct ElementIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLayerType
