#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CCircleFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CCircleFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircleFeatureActualType(CCircleFeatureActualType const& init);
	void operator=(CCircleFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircleFeatureActualType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CCircleFeatureActualType_altova_Location> Location;
	struct Location { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CCircleFeatureActualType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCircleFeatureActualType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCircleFeatureActualType_altova_DiameterMin> DiameterMin;
	struct DiameterMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCircleFeatureActualType_altova_DiameterMax> DiameterMax;
	struct DiameterMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCircleFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircleFeatureActualType
