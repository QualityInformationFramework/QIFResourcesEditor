#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CToroidalSegmentCopyType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CToroidalSegmentCopyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToroidalSegmentCopyType(CToroidalSegmentCopyType const& init);
	void operator=(CToroidalSegmentCopyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToroidalSegmentCopyType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CToroidalSegmentCopyType_altova_BaseToroidalSegment> BaseToroidalSegment;
	struct BaseToroidalSegment { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToroidalSegmentCopyType
