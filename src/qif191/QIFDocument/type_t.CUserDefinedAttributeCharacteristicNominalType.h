#pragma once

#include "type_t.CCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAttributeCharacteristicNominalType : public ::qif191::t::CCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CUserDefinedAttributeCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAttributeCharacteristicNominalType(CUserDefinedAttributeCharacteristicNominalType const& init);
	void operator=(CUserDefinedAttributeCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAttributeCharacteristicNominalType); }
	MemberElement<t::CStringValuesType, _altova_mi_t_altova_CUserDefinedAttributeCharacteristicNominalType_altova_PassValues> PassValues;
	struct PassValues { typedef Iterator<t::CStringValuesType> iterator; };
	MemberElement<t::CStringValuesType, _altova_mi_t_altova_CUserDefinedAttributeCharacteristicNominalType_altova_FailValues> FailValues;
	struct FailValues { typedef Iterator<t::CStringValuesType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAttributeCharacteristicNominalType
