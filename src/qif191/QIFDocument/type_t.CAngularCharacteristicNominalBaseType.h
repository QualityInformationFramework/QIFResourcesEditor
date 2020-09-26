#pragma once

#include "type_t.CDimensionalCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularCharacteristicNominalBaseType : public ::qif191::t::CDimensionalCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CAngularCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularCharacteristicNominalBaseType(CAngularCharacteristicNominalBaseType const& init);
	void operator=(CAngularCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularCharacteristicNominalBaseType); }
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CAngularCharacteristicNominalBaseType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CAngularValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularCharacteristicNominalBaseType
