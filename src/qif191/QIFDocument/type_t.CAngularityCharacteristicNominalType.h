#pragma once

#include "type_t.COrientationCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularityCharacteristicNominalType : public ::qif191::t::COrientationCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CAngularityCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularityCharacteristicNominalType(CAngularityCharacteristicNominalType const& init);
	void operator=(CAngularityCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularityCharacteristicNominalType); }
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CAngularityCharacteristicNominalType_altova_Angle> Angle;
	struct Angle { typedef Iterator<t::CAngularValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularityCharacteristicNominalType
