#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CEllipseFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CEllipseFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipseFeatureActualType(CEllipseFeatureActualType const& init);
	void operator=(CEllipseFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipseFeatureActualType); }
	MemberElement<t::CActualAxisType, _altova_mi_t_altova_CEllipseFeatureActualType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CActualAxisType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CEllipseFeatureActualType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CEllipseFeatureActualType_altova_MajorDiameter> MajorDiameter;
	struct MajorDiameter { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CEllipseFeatureActualType_altova_MinorDiameter> MinorDiameter;
	struct MinorDiameter { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CEllipseFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipseFeatureActualType
