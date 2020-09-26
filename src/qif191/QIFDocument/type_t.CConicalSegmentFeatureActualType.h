#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CConicalSegmentFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CConicalSegmentFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConicalSegmentFeatureActualType(CConicalSegmentFeatureActualType const& init);
	void operator=(CConicalSegmentFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConicalSegmentFeatureActualType); }
	MemberElement<t::CActualAxisType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CActualAxisType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_DiameterMin> DiameterMin;
	struct DiameterMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_DiameterMax> DiameterMax;
	struct DiameterMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_HalfAngle> HalfAngle;
	struct HalfAngle { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_FullAngle> FullAngle;
	struct FullAngle { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_StartLength> StartLength;
	struct StartLength { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_EndLength> EndLength;
	struct EndLength { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CSweepType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_Sweep> Sweep;
	struct Sweep { typedef Iterator<t::CSweepType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CConicalSegmentFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConicalSegmentFeatureActualType
