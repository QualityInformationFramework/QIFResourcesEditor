#pragma once



namespace qif191
{

namespace t
{	

class CPointDefinedCurveConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CPointDefinedCurveConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedCurveConstructionMethodType(CPointDefinedCurveConstructionMethodType const& init);
	void operator=(CPointDefinedCurveConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedCurveConstructionMethodType); }
	MemberElement<t::CPointDefinedCurveBestFitType, _altova_mi_t_altova_CPointDefinedCurveConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CPointDefinedCurveBestFitType> iterator; };
	MemberElement<t::CPointDefinedCurveRecompType, _altova_mi_t_altova_CPointDefinedCurveConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CPointDefinedCurveRecompType> iterator; };
	MemberElement<t::CPointDefinedCurveCopyType, _altova_mi_t_altova_CPointDefinedCurveConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CPointDefinedCurveCopyType> iterator; };
	MemberElement<t::CPointDefinedCurveTransformType, _altova_mi_t_altova_CPointDefinedCurveConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CPointDefinedCurveTransformType> iterator; };
	MemberElement<t::CPointDefinedCurveFromScanType, _altova_mi_t_altova_CPointDefinedCurveConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CPointDefinedCurveFromScanType> iterator; };
	MemberElement<t::CPointDefinedCurveExtractType, _altova_mi_t_altova_CPointDefinedCurveConstructionMethodType_altova_Extract> Extract;
	struct Extract { typedef Iterator<t::CPointDefinedCurveExtractType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedCurveConstructionMethodType
