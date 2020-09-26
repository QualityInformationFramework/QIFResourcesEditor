#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CSphericalSegmentCopyType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CSphericalSegmentCopyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSphericalSegmentCopyType(CSphericalSegmentCopyType const& init);
	void operator=(CSphericalSegmentCopyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSphericalSegmentCopyType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CSphericalSegmentCopyType_altova_BaseSphericalSegment> BaseSphericalSegment;
	struct BaseSphericalSegment { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSphericalSegmentCopyType
