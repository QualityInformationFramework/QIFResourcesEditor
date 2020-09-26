#pragma once

#include "type_t.CStatisticalStudyResultsBaseType.h"


namespace qif191
{

namespace t
{	

class CBiasStudyResultsType : public ::qif191::t::CStatisticalStudyResultsBaseType
{
public:
	QIF191_EXPORT CBiasStudyResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBiasStudyResultsType(CBiasStudyResultsType const& init);
	void operator=(CBiasStudyResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBiasStudyResultsType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CBiasStudyResultsType_altova_SampleSize> SampleSize;
	struct SampleSize { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CBiasStudyResultsType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBiasStudyResultsType
