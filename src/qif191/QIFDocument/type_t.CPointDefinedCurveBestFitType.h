#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPointDefinedCurveBestFitType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPointDefinedCurveBestFitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedCurveBestFitType(CPointDefinedCurveBestFitType const& init);
	void operator=(CPointDefinedCurveBestFitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedCurveBestFitType); }
	MemberElement<t::CSequencedBaseFeatureType, _altova_mi_t_altova_CPointDefinedCurveBestFitType_altova_BaseFeature> BaseFeature;
	struct BaseFeature { typedef Iterator<t::CSequencedBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedCurveBestFitType
