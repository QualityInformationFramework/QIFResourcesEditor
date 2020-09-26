#pragma once

#include "type_t.CFunctionDiscreteType.h"


namespace qif191
{

namespace t
{	

class CLengthFunctionDiscreteType : public ::qif191::t::CFunctionDiscreteType
{
public:
	QIF191_EXPORT CLengthFunctionDiscreteType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLengthFunctionDiscreteType(CLengthFunctionDiscreteType const& init);
	void operator=(CLengthFunctionDiscreteType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLengthFunctionDiscreteType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CLengthFunctionDiscreteType_altova_DomainLinearUnit> DomainLinearUnit;
	struct DomainLinearUnit { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CLengthFunctionDiscreteType_altova_RangeLinearUnit> RangeLinearUnit;
	struct RangeLinearUnit { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLengthFunctionDiscreteType
