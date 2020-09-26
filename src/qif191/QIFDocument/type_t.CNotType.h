#pragma once

#include "type_t.CBooleanExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CNotType : public ::qif191::t::CBooleanExpressionBaseType
{
public:
	QIF191_EXPORT CNotType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNotType(CNotType const& init);
	void operator=(CNotType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNotType); }
	MemberElement<t::CBooleanExpressionBaseType, _altova_mi_t_altova_CNotType_altova_BooleanExpression> BooleanExpression;
	struct BooleanExpression { typedef Iterator<t::CBooleanExpressionBaseType> iterator; };
	MemberElement<t::CAndType, _altova_mi_t_altova_CNotType_altova_And2> And2;
	struct And2 { typedef Iterator<t::CAndType> iterator; };
	MemberElement<t::CArithmeticEqualType, _altova_mi_t_altova_CNotType_altova_ArithmeticEqual> ArithmeticEqual;
	struct ArithmeticEqual { typedef Iterator<t::CArithmeticEqualType> iterator; };
	MemberElement<t::CBooleanEqualType, _altova_mi_t_altova_CNotType_altova_BooleanEqual> BooleanEqual;
	struct BooleanEqual { typedef Iterator<t::CBooleanEqualType> iterator; };
	MemberElement<t::CCharacteristicIsType, _altova_mi_t_altova_CNotType_altova_CharacteristicIs> CharacteristicIs;
	struct CharacteristicIs { typedef Iterator<t::CCharacteristicIsType> iterator; };
	MemberElement<t::CConstantIsType, _altova_mi_t_altova_CNotType_altova_ConstantIs> ConstantIs;
	struct ConstantIs { typedef Iterator<t::CConstantIsType> iterator; };
	MemberElement<t::CFeatureIsDatumType, _altova_mi_t_altova_CNotType_altova_FeatureIsDatum> FeatureIsDatum;
	struct FeatureIsDatum { typedef Iterator<t::CFeatureIsDatumType> iterator; };
	MemberElement<t::CFeatureIsInternalType, _altova_mi_t_altova_CNotType_altova_FeatureIsInternal> FeatureIsInternal;
	struct FeatureIsInternal { typedef Iterator<t::CFeatureIsInternalType> iterator; };
	MemberElement<t::CGreaterOrEqualType, _altova_mi_t_altova_CNotType_altova_GreaterOrEqual> GreaterOrEqual;
	struct GreaterOrEqual { typedef Iterator<t::CGreaterOrEqualType> iterator; };
	MemberElement<t::CGreaterThanType, _altova_mi_t_altova_CNotType_altova_GreaterThan> GreaterThan;
	struct GreaterThan { typedef Iterator<t::CGreaterThanType> iterator; };
	MemberElement<t::CLessOrEqualType, _altova_mi_t_altova_CNotType_altova_LessOrEqual> LessOrEqual;
	struct LessOrEqual { typedef Iterator<t::CLessOrEqualType> iterator; };
	MemberElement<t::CLessThanType, _altova_mi_t_altova_CNotType_altova_LessThan> LessThan;
	struct LessThan { typedef Iterator<t::CLessThanType> iterator; };
	MemberElement<t::CNotType, _altova_mi_t_altova_CNotType_altova_Not2> Not2;
	struct Not2 { typedef Iterator<t::CNotType> iterator; };
	MemberElement<t::COrType, _altova_mi_t_altova_CNotType_altova_Or2> Or2;
	struct Or2 { typedef Iterator<t::COrType> iterator; };
	MemberElement<t::CSamplingRigorIsType, _altova_mi_t_altova_CNotType_altova_SamplingRigorIs> SamplingRigorIs;
	struct SamplingRigorIs { typedef Iterator<t::CSamplingRigorIsType> iterator; };
	MemberElement<t::CShapeClassIsType, _altova_mi_t_altova_CNotType_altova_ShapeClassIs> ShapeClassIs;
	struct ShapeClassIs { typedef Iterator<t::CShapeClassIsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNotType
