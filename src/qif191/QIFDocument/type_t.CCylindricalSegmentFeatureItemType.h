#pragma once

#include "type_t.CFeatureItemBaseType.h"


namespace qif191
{

namespace t
{	

class CCylindricalSegmentFeatureItemType : public ::qif191::t::CFeatureItemBaseType
{
public:
	QIF191_EXPORT CCylindricalSegmentFeatureItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricalSegmentFeatureItemType(CCylindricalSegmentFeatureItemType const& init);
	void operator=(CCylindricalSegmentFeatureItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricalSegmentFeatureItemType); }
	MemberElement<t::CCylindricalSegmentActualDeterminationType, _altova_mi_t_altova_CCylindricalSegmentFeatureItemType_altova_DeterminationMode> DeterminationMode;
	struct DeterminationMode { typedef Iterator<t::CCylindricalSegmentActualDeterminationType> iterator; };
	MemberElement<t::CNonFeatureOfSizeSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CCylindricalSegmentFeatureItemType_altova_SubstituteFeatureAlgorithm> SubstituteFeatureAlgorithm;
	struct SubstituteFeatureAlgorithm { typedef Iterator<t::CNonFeatureOfSizeSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricalSegmentFeatureItemType
