#pragma once

#include "type_t.CCMMAccuracyTestBaseType.h"


namespace qif191
{

namespace t
{	

class CISO10360TestType : public ::qif191::t::CCMMAccuracyTestBaseType
{
public:
	QIF191_EXPORT CISO10360TestType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CISO10360TestType(CISO10360TestType const& init);
	void operator=(CISO10360TestType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CISO10360TestType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CISO10360TestType_altova_MaxErrorConstant> MaxErrorConstant;
	struct MaxErrorConstant { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearErrorType, _altova_mi_t_altova_CISO10360TestType_altova_LinearError> LinearError;
	struct LinearError { typedef Iterator<t::CLinearErrorType> iterator; };
	MemberElement<t::CLesserErrorType, _altova_mi_t_altova_CISO10360TestType_altova_LesserError> LesserError;
	struct LesserError { typedef Iterator<t::CLesserErrorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CISO10360TestType
