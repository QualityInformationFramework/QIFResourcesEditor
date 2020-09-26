#pragma once



namespace qif191
{

namespace t
{	

class CActualProductTraceabilityType : public TypeBase
{
public:
	QIF191_EXPORT CActualProductTraceabilityType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualProductTraceabilityType(CActualProductTraceabilityType const& init);
	void operator=(CActualProductTraceabilityType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualProductTraceabilityType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_SampleNumber> SampleNumber;
	struct SampleNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_LotNumber> LotNumber;
	struct LotNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_ReportNumber> ReportNumber;
	struct ReportNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_ManufacturingProcessId> ManufacturingProcessId;
	struct ManufacturingProcessId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_FixtureId> FixtureId;
	struct FixtureId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_NotableEventIds> NotableEventIds;
	struct NotableEventIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_NotedEventIds> NotedEventIds;
	struct NotedEventIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_InspectionStart> InspectionStart;
	struct InspectionStart { typedef Iterator<xs::CdateTimeType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_InspectionEnd> InspectionEnd;
	struct InspectionEnd { typedef Iterator<xs::CdateTimeType> iterator; };
	MemberElement<t::CInspectionSoftwareItemsType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_InspectionSoftwareItems> InspectionSoftwareItems;
	struct InspectionSoftwareItems { typedef Iterator<t::CInspectionSoftwareItemsType> iterator; };
	MemberElement<t::CInspectionProgramType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_InspectionProgram> InspectionProgram;
	struct InspectionProgram { typedef Iterator<t::CInspectionProgramType> iterator; };
	MemberElement<t::CEmployeeType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_InspectionOperator> InspectionOperator;
	struct InspectionOperator { typedef Iterator<t::CEmployeeType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CEnvironmentsType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_ProductEnvironments> ProductEnvironments;
	struct ProductEnvironments { typedef Iterator<t::CEnvironmentsType> iterator; };
	MemberElement<t::CErrorsType, _altova_mi_t_altova_CActualProductTraceabilityType_altova_Errors> Errors;
	struct Errors { typedef Iterator<t::CErrorsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualProductTraceabilityType
