#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CCuboidFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CCuboidFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCuboidFeatureActualType(CCuboidFeatureActualType const& init);
	void operator=(CCuboidFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCuboidFeatureActualType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_Location> Location;
	struct Location { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_Length> Length;
	struct Length { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_LengthMax> LengthMax;
	struct LengthMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_LengthMin> LengthMin;
	struct LengthMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_LengthVector> LengthVector;
	struct LengthVector { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_Width> Width;
	struct Width { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_WidthMax> WidthMax;
	struct WidthMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_WidthMin> WidthMin;
	struct WidthMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_Height> Height;
	struct Height { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_HeightMax> HeightMax;
	struct HeightMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_HeightMin> HeightMin;
	struct HeightMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_HeightVector> HeightVector;
	struct HeightVector { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCuboidFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCuboidFeatureActualType
