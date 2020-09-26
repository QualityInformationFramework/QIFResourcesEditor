#pragma once

#include "type_t.CCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CPressureCharacteristicNominalBaseType : public ::qif191::t::CCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CPressureCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPressureCharacteristicNominalBaseType(CPressureCharacteristicNominalBaseType const& init);
	void operator=(CPressureCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPressureCharacteristicNominalBaseType); }
	MemberElement<t::CPressureValueType, _altova_mi_t_altova_CPressureCharacteristicNominalBaseType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CPressureValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPressureCharacteristicNominalBaseType
