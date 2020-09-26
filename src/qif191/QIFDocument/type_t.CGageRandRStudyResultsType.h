#pragma once

#include "type_t.CStatisticalStudyResultsBaseType.h"


namespace qif191
{

namespace t
{	

class CGageRandRStudyResultsType : public ::qif191::t::CStatisticalStudyResultsBaseType
{
public:
	QIF191_EXPORT CGageRandRStudyResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGageRandRStudyResultsType(CGageRandRStudyResultsType const& init);
	void operator=(CGageRandRStudyResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGageRandRStudyResultsType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CGageRandRStudyResultsType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CGageRandRStudyResultsType_altova_NumberOfAppraisers> NumberOfAppraisers;
	struct NumberOfAppraisers { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CGageRandRStudyResultsType_altova_NumberOfParts> NumberOfParts;
	struct NumberOfParts { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CGageRandRStudyResultsType_altova_NumberOfTrials> NumberOfTrials;
	struct NumberOfTrials { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGageRandRStudyResultsType
