#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPointFeatureExtremeType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPointFeatureExtremeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointFeatureExtremeType(CPointFeatureExtremeType const& init);
	void operator=(CPointFeatureExtremeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointFeatureExtremeType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointFeatureExtremeType_altova_BaseFeature> BaseFeature;
	struct BaseFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CPointFeatureExtremeType_altova_Minimum> Minimum;
	struct Minimum { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointFeatureExtremeType_altova_BaseAxisFeature> BaseAxisFeature;
	struct BaseAxisFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPointFeatureExtremeType_altova_Vector> Vector;
	struct Vector { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CPointFeatureExtremeType_altova_Radial> Radial;
	struct Radial { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CPointFeatureExtremeType_altova_Xaxis> Xaxis;
	struct Xaxis { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CPointFeatureExtremeType_altova_Yaxis> Yaxis;
	struct Yaxis { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CPointFeatureExtremeType_altova_Zaxis> Zaxis;
	struct Zaxis { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointFeatureExtremeType
