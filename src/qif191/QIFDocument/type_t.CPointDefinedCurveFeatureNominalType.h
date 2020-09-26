#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CPointDefinedCurveFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CPointDefinedCurveFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedCurveFeatureNominalType(CPointDefinedCurveFeatureNominalType const& init);
	void operator=(CPointDefinedCurveFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedCurveFeatureNominalType); }
	MemberElement<t::CTargetPointsNominalType, _altova_mi_t_altova_CPointDefinedCurveFeatureNominalType_altova_DefiningPoints> DefiningPoints;
	struct DefiningPoints { typedef Iterator<t::CTargetPointsNominalType> iterator; };
	MemberElement<t::CPlaneType, _altova_mi_t_altova_CPointDefinedCurveFeatureNominalType_altova_Plane> Plane;
	struct Plane { typedef Iterator<t::CPlaneType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedCurveFeatureNominalType
