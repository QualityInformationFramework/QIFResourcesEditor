#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPointFeatureMovePointType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPointFeatureMovePointType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointFeatureMovePointType(CPointFeatureMovePointType const& init);
	void operator=(CPointFeatureMovePointType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointFeatureMovePointType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointFeatureMovePointType_altova_BaseFeature> BaseFeature;
	struct BaseFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CVectorType, _altova_mi_t_altova_CPointFeatureMovePointType_altova_Offset> Offset;
	struct Offset { typedef Iterator<t::CVectorType> iterator; };
	MemberElement<t::CDirectionalOffsetType, _altova_mi_t_altova_CPointFeatureMovePointType_altova_DirectionalOffset> DirectionalOffset;
	struct DirectionalOffset { typedef Iterator<t::CDirectionalOffsetType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointFeatureMovePointType
