#pragma once

#include "type_t.CFunctionDiscreteType.h"


namespace qif191
{

namespace t
{	

class CAngleFunctionDiscreteType : public ::qif191::t::CFunctionDiscreteType
{
public:
	QIF191_EXPORT CAngleFunctionDiscreteType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleFunctionDiscreteType(CAngleFunctionDiscreteType const& init);
	void operator=(CAngleFunctionDiscreteType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleFunctionDiscreteType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CAngleFunctionDiscreteType_altova_DomainLinearUnit> DomainLinearUnit;
	struct DomainLinearUnit { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CAngleFunctionDiscreteType_altova_RangeAngularUnit> RangeAngularUnit;
	struct RangeAngularUnit { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleFunctionDiscreteType
