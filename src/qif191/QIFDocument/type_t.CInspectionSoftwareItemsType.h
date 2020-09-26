#pragma once



namespace qif191
{

namespace t
{	

class CInspectionSoftwareItemsType : public TypeBase
{
public:
	QIF191_EXPORT CInspectionSoftwareItemsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInspectionSoftwareItemsType(CInspectionSoftwareItemsType const& init);
	void operator=(CInspectionSoftwareItemsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CInspectionSoftwareItemsType); }
	MemberElement<t::CSoftwareType, _altova_mi_t_altova_CInspectionSoftwareItemsType_altova_InspectionProgramGenerationSoftware> InspectionProgramGenerationSoftware;
	struct InspectionProgramGenerationSoftware { typedef Iterator<t::CSoftwareType> iterator; };
	MemberElement<t::CSoftwareType, _altova_mi_t_altova_CInspectionSoftwareItemsType_altova_InspectionProgramExecutionSoftware> InspectionProgramExecutionSoftware;
	struct InspectionProgramExecutionSoftware { typedef Iterator<t::CSoftwareType> iterator; };
	MemberElement<t::CSoftwareType, _altova_mi_t_altova_CInspectionSoftwareItemsType_altova_AnalysisSoftware> AnalysisSoftware;
	struct AnalysisSoftware { typedef Iterator<t::CSoftwareType> iterator; };
	MemberElement<t::CSoftwareType, _altova_mi_t_altova_CInspectionSoftwareItemsType_altova_CADSoftware> CADSoftware;
	struct CADSoftware { typedef Iterator<t::CSoftwareType> iterator; };
	MemberElement<t::CSoftwareType, _altova_mi_t_altova_CInspectionSoftwareItemsType_altova_DMESoftware> DMESoftware;
	struct DMESoftware { typedef Iterator<t::CSoftwareType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInspectionSoftwareItemsType
