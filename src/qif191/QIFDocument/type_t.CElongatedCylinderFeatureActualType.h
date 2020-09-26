#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CElongatedCylinderFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CElongatedCylinderFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElongatedCylinderFeatureActualType(CElongatedCylinderFeatureActualType const& init);
	void operator=(CElongatedCylinderFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElongatedCylinderFeatureActualType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_DiameterMin> DiameterMin;
	struct DiameterMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_DiameterMax> DiameterMax;
	struct DiameterMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualPlaneType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_CenterPlane> CenterPlane;
	struct CenterPlane { typedef Iterator<t::CActualPlaneType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_Length> Length;
	struct Length { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_LengthMax> LengthMax;
	struct LengthMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_LengthMin> LengthMin;
	struct LengthMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_Width> Width;
	struct Width { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_WidthMax> WidthMax;
	struct WidthMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_WidthMin> WidthMin;
	struct WidthMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_Depth> Depth;
	struct Depth { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_DepthMax> DepthMax;
	struct DepthMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_DepthMin> DepthMin;
	struct DepthMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_DepthVector> DepthVector;
	struct DepthVector { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CElongatedCylinderFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElongatedCylinderFeatureActualType
