#pragma once

#include "type_t.CFeatureItemBaseType.h"


namespace qif191
{

namespace t
{	

class CCuboidFeatureItemType : public ::qif191::t::CFeatureItemBaseType
{
public:
	QIF191_EXPORT CCuboidFeatureItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCuboidFeatureItemType(CCuboidFeatureItemType const& init);
	void operator=(CCuboidFeatureItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCuboidFeatureItemType); }
	MemberElement<t::CCuboidActualDeterminationType, _altova_mi_t_altova_CCuboidFeatureItemType_altova_DeterminationMode> DeterminationMode;
	struct DeterminationMode { typedef Iterator<t::CCuboidActualDeterminationType> iterator; };
	MemberElement<t::CFeatureOfSizeSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CCuboidFeatureItemType_altova_SubstituteFeatureAlgorithm> SubstituteFeatureAlgorithm;
	struct SubstituteFeatureAlgorithm { typedef Iterator<t::CFeatureOfSizeSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCuboidFeatureItemType
