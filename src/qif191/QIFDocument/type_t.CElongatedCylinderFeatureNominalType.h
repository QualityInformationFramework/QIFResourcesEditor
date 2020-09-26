#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CElongatedCylinderFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CElongatedCylinderFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElongatedCylinderFeatureNominalType(CElongatedCylinderFeatureNominalType const& init);
	void operator=(CElongatedCylinderFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElongatedCylinderFeatureNominalType); }
	MemberElement<t::CPlaneType, _altova_mi_t_altova_CElongatedCylinderFeatureNominalType_altova_CenterPlane> CenterPlane;
	struct CenterPlane { typedef Iterator<t::CPlaneType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CElongatedCylinderFeatureNominalType_altova_DepthVector> DepthVector;
	struct DepthVector { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElongatedCylinderFeatureNominalType
