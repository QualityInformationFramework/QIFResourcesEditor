#pragma once

#include "type_t.CStatisticalStudyResultsBaseType.h"


namespace qif191
{

namespace t
{	

class CMultipleProductInstanceStudyResultsBaseType : public ::qif191::t::CStatisticalStudyResultsBaseType
{
public:
	QIF191_EXPORT CMultipleProductInstanceStudyResultsBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMultipleProductInstanceStudyResultsBaseType(CMultipleProductInstanceStudyResultsBaseType const& init);
	void operator=(CMultipleProductInstanceStudyResultsBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMultipleProductInstanceStudyResultsBaseType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CMultipleProductInstanceStudyResultsBaseType_altova_NumberOfSamples> NumberOfSamples;
	struct NumberOfSamples { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CMultipleProductInstanceStudyResultsBaseType_altova_SubgroupSize> SubgroupSize;
	struct SubgroupSize { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMultipleProductInstanceStudyResultsBaseType
