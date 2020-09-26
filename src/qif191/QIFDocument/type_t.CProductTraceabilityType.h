#pragma once



namespace qif191
{

namespace t
{	

class CProductTraceabilityType : public TypeBase
{
public:
	QIF191_EXPORT CProductTraceabilityType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProductTraceabilityType(CProductTraceabilityType const& init);
	void operator=(CProductTraceabilityType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProductTraceabilityType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CProductTraceabilityType_altova_ReportNumber> ReportNumber;
	struct ReportNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CProductTraceabilityType_altova_ManufacturingProcessId> ManufacturingProcessId;
	struct ManufacturingProcessId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CProductTraceabilityType_altova_FixtureId> FixtureId;
	struct FixtureId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CProductTraceabilityType_altova_NotableEventIds> NotableEventIds;
	struct NotableEventIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CInspectionSoftwareItemsType, _altova_mi_t_altova_CProductTraceabilityType_altova_InspectionSoftwareItems> InspectionSoftwareItems;
	struct InspectionSoftwareItems { typedef Iterator<t::CInspectionSoftwareItemsType> iterator; };
	MemberElement<t::CInspectionProgramType, _altova_mi_t_altova_CProductTraceabilityType_altova_InspectionProgram> InspectionProgram;
	struct InspectionProgram { typedef Iterator<t::CInspectionProgramType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CProductTraceabilityType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProductTraceabilityType
