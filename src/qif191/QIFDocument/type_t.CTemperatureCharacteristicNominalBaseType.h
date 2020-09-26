#pragma once

#include "type_t.CCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CTemperatureCharacteristicNominalBaseType : public ::qif191::t::CCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CTemperatureCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTemperatureCharacteristicNominalBaseType(CTemperatureCharacteristicNominalBaseType const& init);
	void operator=(CTemperatureCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTemperatureCharacteristicNominalBaseType); }
	MemberElement<t::CTemperatureValueType, _altova_mi_t_altova_CTemperatureCharacteristicNominalBaseType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CTemperatureValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTemperatureCharacteristicNominalBaseType
