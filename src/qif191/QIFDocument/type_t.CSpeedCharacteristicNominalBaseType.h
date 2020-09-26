#pragma once

#include "type_t.CCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CSpeedCharacteristicNominalBaseType : public ::qif191::t::CCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CSpeedCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpeedCharacteristicNominalBaseType(CSpeedCharacteristicNominalBaseType const& init);
	void operator=(CSpeedCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpeedCharacteristicNominalBaseType); }
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CSpeedCharacteristicNominalBaseType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CSpeedValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpeedCharacteristicNominalBaseType
