#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class COppositeLinesFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT COppositeLinesFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositeLinesFeatureActualType(COppositeLinesFeatureActualType const& init);
	void operator=(COppositeLinesFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositeLinesFeatureActualType); }
	MemberElement<t::CActualPointAndVectorType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_CenterLine> CenterLine;
	struct CenterLine { typedef Iterator<t::CActualPointAndVectorType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_Width> Width;
	struct Width { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_WidthMin> WidthMin;
	struct WidthMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_WidthMax> WidthMax;
	struct WidthMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_Length> Length;
	struct Length { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_LengthMin> LengthMin;
	struct LengthMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_LengthMax> LengthMax;
	struct LengthMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_TaperAngle> TaperAngle;
	struct TaperAngle { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualEndRadiusType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_EndRadius1> EndRadius1;
	struct EndRadius1 { typedef Iterator<t::CActualEndRadiusType> iterator; };
	MemberElement<t::CActualEndRadiusType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_EndRadius2> EndRadius2;
	struct EndRadius2 { typedef Iterator<t::CActualEndRadiusType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COppositeLinesFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositeLinesFeatureActualType
