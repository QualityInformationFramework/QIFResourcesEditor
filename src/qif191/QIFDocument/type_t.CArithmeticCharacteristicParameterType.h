#pragma once

#include "type_t.CArithmeticExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CArithmeticCharacteristicParameterType : public ::qif191::t::CArithmeticExpressionBaseType
{
public:
	QIF191_EXPORT CArithmeticCharacteristicParameterType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArithmeticCharacteristicParameterType(CArithmeticCharacteristicParameterType const& init);
	void operator=(CArithmeticCharacteristicParameterType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArithmeticCharacteristicParameterType); }
	MemberElement<t::CCharacteristicTypeEnumTypeType, _altova_mi_t_altova_CArithmeticCharacteristicParameterType_altova_CharacteristicTypeEnum> CharacteristicTypeEnum;
	struct CharacteristicTypeEnum { typedef Iterator<t::CCharacteristicTypeEnumTypeType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CArithmeticCharacteristicParameterType_altova_Parameter> Parameter;
	struct Parameter { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArithmeticCharacteristicParameterType
