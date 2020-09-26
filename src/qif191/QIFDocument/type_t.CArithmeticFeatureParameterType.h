#pragma once

#include "type_t.CArithmeticExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CArithmeticFeatureParameterType : public ::qif191::t::CArithmeticExpressionBaseType
{
public:
	QIF191_EXPORT CArithmeticFeatureParameterType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArithmeticFeatureParameterType(CArithmeticFeatureParameterType const& init);
	void operator=(CArithmeticFeatureParameterType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArithmeticFeatureParameterType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CArithmeticFeatureParameterType_altova_Parameter> Parameter;
	struct Parameter { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArithmeticFeatureParameterType
