#pragma once

#include "type_t.CCMMAccuracyTestBaseType.h"


namespace qif191
{

namespace t
{	

class CPointAccuracyTestType : public ::qif191::t::CCMMAccuracyTestBaseType
{
public:
	QIF191_EXPORT CPointAccuracyTestType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointAccuracyTestType(CPointAccuracyTestType const& init);
	void operator=(CPointAccuracyTestType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointAccuracyTestType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CPointAccuracyTestType_altova_Accuracy> Accuracy;
	struct Accuracy { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointAccuracyTestType
