#pragma once



namespace qif191
{

namespace t
{	

class CMeasurementResultsType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurementResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementResultsType(CMeasurementResultsType const& init);
	void operator=(CMeasurementResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurementResultsType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CMeasurementResultsType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CInspectionTraceabilityType, _altova_mi_t_altova_CMeasurementResultsType_altova_InspectionTraceability> InspectionTraceability;
	struct InspectionTraceability { typedef Iterator<t::CInspectionTraceabilityType> iterator; };
	MemberElement<t::CQPIdTypeType, _altova_mi_t_altova_CMeasurementResultsType_altova_ThisResultsInstanceQPId> ThisResultsInstanceQPId;
	struct ThisResultsInstanceQPId { typedef Iterator<t::CQPIdTypeType> iterator; };
	MemberElement<t::CExternalFileReferenceType, _altova_mi_t_altova_CMeasurementResultsType_altova_ExternalFileReference> ExternalFileReference;
	struct ExternalFileReference { typedef Iterator<t::CExternalFileReferenceType> iterator; };
	MemberElement<t::CMeasuredFeaturesType, _altova_mi_t_altova_CMeasurementResultsType_altova_MeasuredFeatures> MeasuredFeatures;
	struct MeasuredFeatures { typedef Iterator<t::CMeasuredFeaturesType> iterator; };
	MemberElement<t::CMeasuredCharacteristicsType, _altova_mi_t_altova_CMeasurementResultsType_altova_MeasuredCharacteristics> MeasuredCharacteristics;
	struct MeasuredCharacteristics { typedef Iterator<t::CMeasuredCharacteristicsType> iterator; };
	MemberElement<t::CCoordinateSystemActualTransformsType, _altova_mi_t_altova_CMeasurementResultsType_altova_CoordinateSystemActualTransforms> CoordinateSystemActualTransforms;
	struct CoordinateSystemActualTransforms { typedef Iterator<t::CCoordinateSystemActualTransformsType> iterator; };
	MemberElement<t::CInspectionStatusType, _altova_mi_t_altova_CMeasurementResultsType_altova_InspectionStatus> InspectionStatus;
	struct InspectionStatus { typedef Iterator<t::CInspectionStatusType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CMeasurementResultsType_altova_ActualComponentIds> ActualComponentIds;
	struct ActualComponentIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementResultsType
