#pragma once

#include "type_t.CFeatureItemBaseType.h"


namespace qif191
{

namespace t
{	

class CTorusFeatureItemType : public ::qif191::t::CFeatureItemBaseType
{
public:
	QIF191_EXPORT CTorusFeatureItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorusFeatureItemType(CTorusFeatureItemType const& init);
	void operator=(CTorusFeatureItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorusFeatureItemType); }
	MemberElement<t::CTorusActualDeterminationType, _altova_mi_t_altova_CTorusFeatureItemType_altova_DeterminationMode> DeterminationMode;
	struct DeterminationMode { typedef Iterator<t::CTorusActualDeterminationType> iterator; };
	MemberElement<t::CFeatureOfSizeSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CTorusFeatureItemType_altova_SubstituteFeatureAlgorithm> SubstituteFeatureAlgorithm;
	struct SubstituteFeatureAlgorithm { typedef Iterator<t::CFeatureOfSizeSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorusFeatureItemType
