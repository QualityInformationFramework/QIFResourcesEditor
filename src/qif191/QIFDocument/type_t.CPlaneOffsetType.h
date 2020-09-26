#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPlaneOffsetType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPlaneOffsetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneOffsetType(CPlaneOffsetType const& init);
	void operator=(CPlaneOffsetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneOffsetType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPlaneOffsetType_altova_BasePlane> BasePlane;
	struct BasePlane { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CPlaneOffsetType_altova_Offset> Offset;
	struct Offset { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneOffsetType
