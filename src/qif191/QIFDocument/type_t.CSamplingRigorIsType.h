#pragma once

#include "type_t.CBooleanExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CSamplingRigorIsType : public ::qif191::t::CBooleanExpressionBaseType
{
public:
	QIF191_EXPORT CSamplingRigorIsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSamplingRigorIsType(CSamplingRigorIsType const& init);
	void operator=(CSamplingRigorIsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSamplingRigorIsType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CSamplingRigorIsType_altova_val, 0, 0> val;	// val CunsignedInt
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSamplingRigorIsType
