#pragma once

#include "type_t.CFeatureItemBaseType.h"


namespace qif191
{

namespace t
{	

class CExtrudedCrossSectionFeatureItemType : public ::qif191::t::CFeatureItemBaseType
{
public:
	QIF191_EXPORT CExtrudedCrossSectionFeatureItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrudedCrossSectionFeatureItemType(CExtrudedCrossSectionFeatureItemType const& init);
	void operator=(CExtrudedCrossSectionFeatureItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrudedCrossSectionFeatureItemType); }
	MemberElement<t::CExtrudedCrossSectionActualDeterminationType, _altova_mi_t_altova_CExtrudedCrossSectionFeatureItemType_altova_DeterminationMode> DeterminationMode;
	struct DeterminationMode { typedef Iterator<t::CExtrudedCrossSectionActualDeterminationType> iterator; };
	MemberElement<t::CCurveSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CExtrudedCrossSectionFeatureItemType_altova_SubstituteFeatureAlgorithm> SubstituteFeatureAlgorithm;
	struct SubstituteFeatureAlgorithm { typedef Iterator<t::CCurveSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrudedCrossSectionFeatureItemType
