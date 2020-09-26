#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CPointDefinedCurveFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CPointDefinedCurveFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedCurveFeatureActualType(CPointDefinedCurveFeatureActualType const& init);
	void operator=(CPointDefinedCurveFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedCurveFeatureActualType); }
	MemberElement<t::CTargetPointsActualType, _altova_mi_t_altova_CPointDefinedCurveFeatureActualType_altova_DefiningPoints> DefiningPoints;
	struct DefiningPoints { typedef Iterator<t::CTargetPointsActualType> iterator; };
	MemberElement<t::CActualPlaneType, _altova_mi_t_altova_CPointDefinedCurveFeatureActualType_altova_Plane> Plane;
	struct Plane { typedef Iterator<t::CActualPlaneType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CPointDefinedCurveFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedCurveFeatureActualType
