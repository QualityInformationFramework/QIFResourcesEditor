#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CToroidalSegmentBestFitType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CToroidalSegmentBestFitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToroidalSegmentBestFitType(CToroidalSegmentBestFitType const& init);
	void operator=(CToroidalSegmentBestFitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToroidalSegmentBestFitType); }
	MemberElement<t::CSequencedBaseFeatureType, _altova_mi_t_altova_CToroidalSegmentBestFitType_altova_BaseFeature> BaseFeature;
	struct BaseFeature { typedef Iterator<t::CSequencedBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToroidalSegmentBestFitType
