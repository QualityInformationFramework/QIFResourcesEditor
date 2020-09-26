#pragma once



namespace qif191
{

namespace t
{	

class CQIFDocumentType : public TypeBase
{
public:
	QIF191_EXPORT CQIFDocumentType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQIFDocumentType(CQIFDocumentType const& init);
	void operator=(CQIFDocumentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CQIFDocumentType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CQIFDocumentType_altova_versionQIF, 0, 0> versionQIF;	// versionQIF CNMTOKEN

	MemberAttribute<unsigned,_altova_mi_t_altova_CQIFDocumentType_altova_QIFIdMax, 0, 0> QIFIdMax;	// QIFIdMax CunsignedInt
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CQIFDocumentType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<t::CVersionsType, _altova_mi_t_altova_CQIFDocumentType_altova_Versions> Versions;
	struct Versions { typedef Iterator<t::CVersionsType> iterator; };
	MemberElement<t::CQPIdTypeType, _altova_mi_t_altova_CQIFDocumentType_altova_ThisDocumentInstanceQPId> ThisDocumentInstanceQPId;
	struct ThisDocumentInstanceQPId { typedef Iterator<t::CQPIdTypeType> iterator; };
	MemberElement<t::CQIFDocumentHeaderType, _altova_mi_t_altova_CQIFDocumentType_altova_Header> Header;
	struct Header { typedef Iterator<t::CQIFDocumentHeaderType> iterator; };
	MemberElement<t::CPreInspectionTraceabilityType, _altova_mi_t_altova_CQIFDocumentType_altova_PreInspectionTraceability> PreInspectionTraceability;
	struct PreInspectionTraceability { typedef Iterator<t::CPreInspectionTraceabilityType> iterator; };
	MemberElement<t::CFileUnitsType, _altova_mi_t_altova_CQIFDocumentType_altova_FileUnits> FileUnits;
	struct FileUnits { typedef Iterator<t::CFileUnitsType> iterator; };
	MemberElement<t::CDatumDefinitionsType, _altova_mi_t_altova_CQIFDocumentType_altova_DatumDefinitions> DatumDefinitions;
	struct DatumDefinitions { typedef Iterator<t::CDatumDefinitionsType> iterator; };
	MemberElement<t::CDatumTargetDefinitionsType, _altova_mi_t_altova_CQIFDocumentType_altova_DatumTargetDefinitions> DatumTargetDefinitions;
	struct DatumTargetDefinitions { typedef Iterator<t::CDatumTargetDefinitionsType> iterator; };
	MemberElement<t::CTransformListType, _altova_mi_t_altova_CQIFDocumentType_altova_Transforms> Transforms;
	struct Transforms { typedef Iterator<t::CTransformListType> iterator; };
	MemberElement<t::CCoordinateSystemListType, _altova_mi_t_altova_CQIFDocumentType_altova_CoordinateSystems> CoordinateSystems;
	struct CoordinateSystems { typedef Iterator<t::CCoordinateSystemListType> iterator; };
	MemberElement<t::CDatumReferenceFramesType, _altova_mi_t_altova_CQIFDocumentType_altova_DatumReferenceFrames> DatumReferenceFrames;
	struct DatumReferenceFrames { typedef Iterator<t::CDatumReferenceFramesType> iterator; };
	MemberElement<t::CMeasurementResourcesType, _altova_mi_t_altova_CQIFDocumentType_altova_MeasurementResources> MeasurementResources;
	struct MeasurementResources { typedef Iterator<t::CMeasurementResourcesType> iterator; };
	MemberElement<t::CThreadSpecificationsType, _altova_mi_t_altova_CQIFDocumentType_altova_ThreadSpecifications> ThreadSpecifications;
	struct ThreadSpecifications { typedef Iterator<t::CThreadSpecificationsType> iterator; };
	MemberElement<t::CProductType, _altova_mi_t_altova_CQIFDocumentType_altova_Product> Product;
	struct Product { typedef Iterator<t::CProductType> iterator; };
	MemberElement<t::CFeatureAspectsListsType, _altova_mi_t_altova_CQIFDocumentType_altova_Features> Features;
	struct Features { typedef Iterator<t::CFeatureAspectsListsType> iterator; };
	MemberElement<t::CCharacteristicAspectsListsType, _altova_mi_t_altova_CQIFDocumentType_altova_Characteristics> Characteristics;
	struct Characteristics { typedef Iterator<t::CCharacteristicAspectsListsType> iterator; };
	MemberElement<t::CMeasurementPlanType, _altova_mi_t_altova_CQIFDocumentType_altova_MeasurementPlan> MeasurementPlan;
	struct MeasurementPlan { typedef Iterator<t::CMeasurementPlanType> iterator; };
	MemberElement<t::CMeasurementsResultsType, _altova_mi_t_altova_CQIFDocumentType_altova_MeasurementsResults> MeasurementsResults;
	struct MeasurementsResults { typedef Iterator<t::CMeasurementsResultsType> iterator; };
	MemberElement<t::CStatisticsType, _altova_mi_t_altova_CQIFDocumentType_altova_Statistics> Statistics;
	struct Statistics { typedef Iterator<t::CStatisticsType> iterator; };
	MemberElement<t::CManufacturingProcessTraceabilitiesType, _altova_mi_t_altova_CQIFDocumentType_altova_ManufacturingProcessTraceabilities> ManufacturingProcessTraceabilities;
	struct ManufacturingProcessTraceabilities { typedef Iterator<t::CManufacturingProcessTraceabilitiesType> iterator; };
	MemberElement<t::CQIFRulesType, _altova_mi_t_altova_CQIFDocumentType_altova_Rules> Rules;
	struct Rules { typedef Iterator<t::CQIFRulesType> iterator; };
	MemberElement<t::CUserDataXMLType, _altova_mi_t_altova_CQIFDocumentType_altova_UserDataXML> UserDataXML;
	struct UserDataXML { typedef Iterator<t::CUserDataXMLType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQIFDocumentType
