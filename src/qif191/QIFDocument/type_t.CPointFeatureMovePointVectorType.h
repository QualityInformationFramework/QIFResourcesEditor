#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPointFeatureMovePointVectorType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPointFeatureMovePointVectorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointFeatureMovePointVectorType(CPointFeatureMovePointVectorType const& init);
	void operator=(CPointFeatureMovePointVectorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointFeatureMovePointVectorType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointFeatureMovePointVectorType_altova_BaseFeature> BaseFeature;
	struct BaseFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CPointFeatureMovePointVectorType_altova_Distance> Distance;
	struct Distance { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPointFeatureMovePointVectorType_altova_Vector> Vector;
	struct Vector { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointFeatureMovePointVectorType
