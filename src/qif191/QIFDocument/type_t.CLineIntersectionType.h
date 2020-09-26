#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CLineIntersectionType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CLineIntersectionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineIntersectionType(CLineIntersectionType const& init);
	void operator=(CLineIntersectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineIntersectionType); }
	MemberElement<t::CSequencedBaseFeatureType, _altova_mi_t_altova_CLineIntersectionType_altova_BasePlane> BasePlane;
	struct BasePlane { typedef Iterator<t::CSequencedBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineIntersectionType
