#pragma once



namespace qif191
{

namespace t
{	

class CMeasurementsResultsType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurementsResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementsResultsType(CMeasurementsResultsType const& init);
	void operator=(CMeasurementsResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurementsResultsType); }
	MemberElement<t::CVersionType, _altova_mi_t_altova_CMeasurementsResultsType_altova_Version> Version;
	struct Version { typedef Iterator<t::CVersionType> iterator; };
	MemberElement<t::CMeasurementResultsType, _altova_mi_t_altova_CMeasurementsResultsType_altova_MeasurementResults> MeasurementResults;
	struct MeasurementResults { typedef Iterator<t::CMeasurementResultsType> iterator; };
	MemberElement<t::CActualComponentSetType, _altova_mi_t_altova_CMeasurementsResultsType_altova_ActualComponentSet> ActualComponentSet;
	struct ActualComponentSet { typedef Iterator<t::CActualComponentSetType> iterator; };
	MemberElement<t::CInspectionTraceabilityType, _altova_mi_t_altova_CMeasurementsResultsType_altova_InspectionTraceability> InspectionTraceability;
	struct InspectionTraceability { typedef Iterator<t::CInspectionTraceabilityType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementsResultsType
