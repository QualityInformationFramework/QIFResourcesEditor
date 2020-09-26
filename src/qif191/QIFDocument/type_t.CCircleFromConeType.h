#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CCircleFromConeType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CCircleFromConeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircleFromConeType(CCircleFromConeType const& init);
	void operator=(CCircleFromConeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircleFromConeType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCircleFromConeType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCircleFromConeType_altova_Distance> Distance;
	struct Distance { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircleFromConeType
