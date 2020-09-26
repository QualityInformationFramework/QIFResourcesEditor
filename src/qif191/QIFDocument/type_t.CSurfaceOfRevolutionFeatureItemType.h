#pragma once

#include "type_t.CFeatureItemBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceOfRevolutionFeatureItemType : public ::qif191::t::CFeatureItemBaseType
{
public:
	QIF191_EXPORT CSurfaceOfRevolutionFeatureItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceOfRevolutionFeatureItemType(CSurfaceOfRevolutionFeatureItemType const& init);
	void operator=(CSurfaceOfRevolutionFeatureItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceOfRevolutionFeatureItemType); }
	MemberElement<t::CSurfaceOfRevolutionActualDeterminationType, _altova_mi_t_altova_CSurfaceOfRevolutionFeatureItemType_altova_DeterminationMode> DeterminationMode;
	struct DeterminationMode { typedef Iterator<t::CSurfaceOfRevolutionActualDeterminationType> iterator; };
	MemberElement<t::CCurveSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CSurfaceOfRevolutionFeatureItemType_altova_SubstituteFeatureAlgorithm> SubstituteFeatureAlgorithm;
	struct SubstituteFeatureAlgorithm { typedef Iterator<t::CCurveSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceOfRevolutionFeatureItemType
