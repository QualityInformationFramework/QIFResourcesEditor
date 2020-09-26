#pragma once



namespace qif191
{

namespace t
{	

class CPreInspectionTraceabilityType : public TypeBase
{
public:
	QIF191_EXPORT CPreInspectionTraceabilityType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPreInspectionTraceabilityType(CPreInspectionTraceabilityType const& init);
	void operator=(CPreInspectionTraceabilityType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPreInspectionTraceabilityType); }
	MemberElement<t::COrganizationType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_InspectingOrganization> InspectingOrganization;
	struct InspectingOrganization { typedef Iterator<t::COrganizationType> iterator; };
	MemberElement<t::CCustomerOrganizationType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_CustomerOrganization> CustomerOrganization;
	struct CustomerOrganization { typedef Iterator<t::CCustomerOrganizationType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_SupplierCode> SupplierCode;
	struct SupplierCode { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_PurchaseOrderNumber> PurchaseOrderNumber;
	struct PurchaseOrderNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_OrderNumber> OrderNumber;
	struct OrderNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_AsmPathIds> AsmPathIds;
	struct AsmPathIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_ReportNumber> ReportNumber;
	struct ReportNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CInspectionScopeEnumTypeType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_InspectionScope> InspectionScope;
	struct InspectionScope { typedef Iterator<t::CInspectionScopeEnumTypeType> iterator; };
	MemberElement<t::CInspectionModeEnumTypeType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_InspectionMode> InspectionMode;
	struct InspectionMode { typedef Iterator<t::CInspectionModeEnumTypeType> iterator; };
	MemberElement<t::CPartialInspectionType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_PartialInspection> PartialInspection;
	struct PartialInspection { typedef Iterator<t::CPartialInspectionType> iterator; };
	MemberElement<t::CNotableEventsType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_NotableEvents> NotableEvents;
	struct NotableEvents { typedef Iterator<t::CNotableEventsType> iterator; };
	MemberElement<t::CInspectionSoftwareItemsType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_InspectionSoftwareItems> InspectionSoftwareItems;
	struct InspectionSoftwareItems { typedef Iterator<t::CInspectionSoftwareItemsType> iterator; };
	MemberElement<t::CInspectionProgramType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_InspectionProgram> InspectionProgram;
	struct InspectionProgram { typedef Iterator<t::CInspectionProgramType> iterator; };
	MemberElement<t::CSecurityClassificationType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_SecurityClassification> SecurityClassification;
	struct SecurityClassification { typedef Iterator<t::CSecurityClassificationType> iterator; };
	MemberElement<t::CLocationType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_PlantLocation> PlantLocation;
	struct PlantLocation { typedef Iterator<t::CLocationType> iterator; };
	MemberElement<t::CQPIdReferenceTypeType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_ReferencedQIFPlanInstanceQPId> ReferencedQIFPlanInstanceQPId;
	struct ReferencedQIFPlanInstanceQPId { typedef Iterator<t::CQPIdReferenceTypeType> iterator; };
	MemberElement<xs::CNMTOKENType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_ReferencedQIFPlan> ReferencedQIFPlan;
	struct ReferencedQIFPlan { typedef Iterator<xs::CNMTOKENType> iterator; };
	MemberElement<t::CFormalStandardType, _altova_mi_t_altova_CPreInspectionTraceabilityType_altova_FormalStandard> FormalStandard;
	struct FormalStandard { typedef Iterator<t::CFormalStandardType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPreInspectionTraceabilityType
