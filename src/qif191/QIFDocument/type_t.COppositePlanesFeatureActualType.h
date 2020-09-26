#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class COppositePlanesFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT COppositePlanesFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositePlanesFeatureActualType(COppositePlanesFeatureActualType const& init);
	void operator=(COppositePlanesFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositePlanesFeatureActualType); }
	MemberElement<t::CActualPlaneType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_CenterPlane> CenterPlane;
	struct CenterPlane { typedef Iterator<t::CActualPlaneType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_LengthVector> LengthVector;
	struct LengthVector { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_DepthVector> DepthVector;
	struct DepthVector { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_Width> Width;
	struct Width { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_WidthMin> WidthMin;
	struct WidthMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_WidthMax> WidthMax;
	struct WidthMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_Length> Length;
	struct Length { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_LengthMin> LengthMin;
	struct LengthMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_LengthMax> LengthMax;
	struct LengthMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_Depth> Depth;
	struct Depth { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_TaperAngle> TaperAngle;
	struct TaperAngle { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_DraftAngle> DraftAngle;
	struct DraftAngle { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualEndRadiusType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_EndRadius1> EndRadius1;
	struct EndRadius1 { typedef Iterator<t::CActualEndRadiusType> iterator; };
	MemberElement<t::CActualEndRadiusType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_EndRadius2> EndRadius2;
	struct EndRadius2 { typedef Iterator<t::CActualEndRadiusType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositePlanesFeatureActualType
