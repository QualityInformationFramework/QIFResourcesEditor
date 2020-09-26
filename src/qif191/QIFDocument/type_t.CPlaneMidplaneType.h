#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPlaneMidplaneType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPlaneMidplaneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneMidplaneType(CPlaneMidplaneType const& init);
	void operator=(CPlaneMidplaneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneMidplaneType); }
	MemberElement<t::CSequencedBaseFeatureType, _altova_mi_t_altova_CPlaneMidplaneType_altova_BasePlane> BasePlane;
	struct BasePlane { typedef Iterator<t::CSequencedBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneMidplaneType
