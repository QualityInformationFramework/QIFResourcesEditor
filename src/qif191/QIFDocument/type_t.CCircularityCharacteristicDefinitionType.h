#pragma once

#include "type_t.CCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCircularityCharacteristicDefinitionType : public ::qif191::t::CCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CCircularityCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularityCharacteristicDefinitionType(CCircularityCharacteristicDefinitionType const& init);
	void operator=(CCircularityCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularityCharacteristicDefinitionType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCircularityCharacteristicDefinitionType_altova_ToleranceValue> ToleranceValue;
	struct ToleranceValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CToleranceZonePerUnitAngleType, _altova_mi_t_altova_CCircularityCharacteristicDefinitionType_altova_ToleranceZonePerUnitAngle> ToleranceZonePerUnitAngle;
	struct ToleranceZonePerUnitAngle { typedef Iterator<t::CToleranceZonePerUnitAngleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularityCharacteristicDefinitionType
