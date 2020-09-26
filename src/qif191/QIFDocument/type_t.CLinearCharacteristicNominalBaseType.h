#pragma once

#include "type_t.CDimensionalCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CLinearCharacteristicNominalBaseType : public ::qif191::t::CDimensionalCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CLinearCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearCharacteristicNominalBaseType(CLinearCharacteristicNominalBaseType const& init);
	void operator=(CLinearCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearCharacteristicNominalBaseType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CLinearCharacteristicNominalBaseType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearCharacteristicNominalBaseType
