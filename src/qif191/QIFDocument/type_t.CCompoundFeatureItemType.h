#pragma once

#include "type_t.CCompositeFeatureItemBaseType.h"


namespace qif191
{

namespace t
{	

class CCompoundFeatureItemType : public ::qif191::t::CCompositeFeatureItemBaseType
{
public:
	QIF191_EXPORT CCompoundFeatureItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompoundFeatureItemType(CCompoundFeatureItemType const& init);
	void operator=(CCompoundFeatureItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompoundFeatureItemType); }
	MemberElement<t::CFeatureOfSizeSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CCompoundFeatureItemType_altova_SubstituteFeatureAlgorithm> SubstituteFeatureAlgorithm;
	struct SubstituteFeatureAlgorithm { typedef Iterator<t::CFeatureOfSizeSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompoundFeatureItemType
