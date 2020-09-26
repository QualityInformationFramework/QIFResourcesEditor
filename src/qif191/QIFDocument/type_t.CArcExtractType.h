#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CArcExtractType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CArcExtractType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcExtractType(CArcExtractType const& init);
	void operator=(CArcExtractType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcExtractType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CArcExtractType_altova_CurveFeature> CurveFeature;
	struct CurveFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcExtractType
