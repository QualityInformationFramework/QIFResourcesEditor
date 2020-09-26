#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CEllipseBestFitType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CEllipseBestFitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipseBestFitType(CEllipseBestFitType const& init);
	void operator=(CEllipseBestFitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipseBestFitType); }
	MemberElement<t::CSequencedBaseFeatureType, _altova_mi_t_altova_CEllipseBestFitType_altova_BaseFeature> BaseFeature;
	struct BaseFeature { typedef Iterator<t::CSequencedBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipseBestFitType
