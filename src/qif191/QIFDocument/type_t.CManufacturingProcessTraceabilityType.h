#pragma once



namespace qif191
{

namespace t
{	

class CManufacturingProcessTraceabilityType : public TypeBase
{
public:
	QIF191_EXPORT CManufacturingProcessTraceabilityType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CManufacturingProcessTraceabilityType(CManufacturingProcessTraceabilityType const& init);
	void operator=(CManufacturingProcessTraceabilityType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CManufacturingProcessTraceabilityType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_Job> Job;
	struct Job { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_Revision> Revision;
	struct Revision { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_PreviousOperationId> PreviousOperationId;
	struct PreviousOperationId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_Path> Path;
	struct Path { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_MachineManufacturerName> MachineManufacturerName;
	struct MachineManufacturerName { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_MachineIdentifier> MachineIdentifier;
	struct MachineIdentifier { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_OperatorIdentifier> OperatorIdentifier;
	struct OperatorIdentifier { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_Shift> Shift;
	struct Shift { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_Department> Department;
	struct Department { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_ResponsibilityIdentifier> ResponsibilityIdentifier;
	struct ResponsibilityIdentifier { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_PlantSector> PlantSector;
	struct PlantSector { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CProcessParameterType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_ProcessParameter> ProcessParameter;
	struct ProcessParameter { typedef Iterator<t::CProcessParameterType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CManufacturingProcessTraceabilityType_altova_AssociatedTraceabilityId> AssociatedTraceabilityId;
	struct AssociatedTraceabilityId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CManufacturingProcessTraceabilityType
