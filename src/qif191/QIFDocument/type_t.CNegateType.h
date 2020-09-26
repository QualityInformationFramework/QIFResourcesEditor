#pragma once

#include "type_t.CArithmeticExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CNegateType : public ::qif191::t::CArithmeticExpressionBaseType
{
public:
	QIF191_EXPORT CNegateType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNegateType(CNegateType const& init);
	void operator=(CNegateType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNegateType); }
	MemberElement<t::CArithmeticExpressionBaseType, _altova_mi_t_altova_CNegateType_altova_ArithmeticExpression> ArithmeticExpression;
	struct ArithmeticExpression { typedef Iterator<t::CArithmeticExpressionBaseType> iterator; };
	MemberElement<t::CArithmeticCharacteristicParameterType, _altova_mi_t_altova_CNegateType_altova_ArithmeticCharacteristicParameter> ArithmeticCharacteristicParameter;
	struct ArithmeticCharacteristicParameter { typedef Iterator<t::CArithmeticCharacteristicParameterType> iterator; };
	MemberElement<t::CArithmeticConstantType, _altova_mi_t_altova_CNegateType_altova_ArithmeticConstant> ArithmeticConstant;
	struct ArithmeticConstant { typedef Iterator<t::CArithmeticConstantType> iterator; };
	MemberElement<t::CArithmeticFeatureParameterType, _altova_mi_t_altova_CNegateType_altova_ArithmeticFeatureParameter> ArithmeticFeatureParameter;
	struct ArithmeticFeatureParameter { typedef Iterator<t::CArithmeticFeatureParameterType> iterator; };
	MemberElement<t::CDividedByType, _altova_mi_t_altova_CNegateType_altova_DividedBy> DividedBy;
	struct DividedBy { typedef Iterator<t::CDividedByType> iterator; };
	MemberElement<t::CFeatureAreaType, _altova_mi_t_altova_CNegateType_altova_FeatureArea> FeatureArea;
	struct FeatureArea { typedef Iterator<t::CFeatureAreaType> iterator; };
	MemberElement<t::CFeatureLengthType, _altova_mi_t_altova_CNegateType_altova_FeatureLength> FeatureLength;
	struct FeatureLength { typedef Iterator<t::CFeatureLengthType> iterator; };
	MemberElement<t::CMinusType, _altova_mi_t_altova_CNegateType_altova_Minus> Minus;
	struct Minus { typedef Iterator<t::CMinusType> iterator; };
	MemberElement<t::CNegateType, _altova_mi_t_altova_CNegateType_altova_Negate> Negate;
	struct Negate { typedef Iterator<t::CNegateType> iterator; };
	MemberElement<t::CPlusType, _altova_mi_t_altova_CNegateType_altova_Plus> Plus;
	struct Plus { typedef Iterator<t::CPlusType> iterator; };
	MemberElement<t::CTimesType, _altova_mi_t_altova_CNegateType_altova_Times> Times;
	struct Times { typedef Iterator<t::CTimesType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNegateType
