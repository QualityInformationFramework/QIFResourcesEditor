#pragma once

#include "type_t.CCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedUnitCharacteristicNominalType : public ::qif191::t::CCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CUserDefinedUnitCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedUnitCharacteristicNominalType(CUserDefinedUnitCharacteristicNominalType const& init);
	void operator=(CUserDefinedUnitCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedUnitCharacteristicNominalType); }
	MemberElement<t::CUserDefinedUnitValueType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicNominalType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CUserDefinedUnitValueType> iterator; };
	MemberElement<t::CUserDefinedUnitValueType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicNominalType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CUserDefinedUnitValueType> iterator; };
	MemberElement<t::CUserDefinedUnitValueType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicNominalType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CUserDefinedUnitValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicNominalType_altova_DefinedAsLimit> DefinedAsLimit;
	struct DefinedAsLimit { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedUnitCharacteristicNominalType
