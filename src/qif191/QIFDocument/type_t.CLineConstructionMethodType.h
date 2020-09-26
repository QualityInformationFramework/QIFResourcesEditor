#pragma once



namespace qif191
{

namespace t
{	

class CLineConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CLineConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineConstructionMethodType(CLineConstructionMethodType const& init);
	void operator=(CLineConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineConstructionMethodType); }
	MemberElement<t::CLineBestFitType, _altova_mi_t_altova_CLineConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CLineBestFitType> iterator; };
	MemberElement<t::CLineRecompType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CLineRecompType> iterator; };
	MemberElement<t::CLineMidlineType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Midline> Midline;
	struct Midline { typedef Iterator<t::CLineMidlineType> iterator; };
	MemberElement<t::CLineIntersectionType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Intersection> Intersection;
	struct Intersection { typedef Iterator<t::CLineIntersectionType> iterator; };
	MemberElement<t::CLineProjectionType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Projection> Projection;
	struct Projection { typedef Iterator<t::CLineProjectionType> iterator; };
	MemberElement<t::CLinePerpendicularType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Perpendicular> Perpendicular;
	struct Perpendicular { typedef Iterator<t::CLinePerpendicularType> iterator; };
	MemberElement<t::CLineParallelType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Parallel> Parallel;
	struct Parallel { typedef Iterator<t::CLineParallelType> iterator; };
	MemberElement<t::CLineCopyType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CLineCopyType> iterator; };
	MemberElement<t::CLineCastType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CLineCastType> iterator; };
	MemberElement<t::CLineTangentThroughType, _altova_mi_t_altova_CLineConstructionMethodType_altova_TangentThrough> TangentThrough;
	struct TangentThrough { typedef Iterator<t::CLineTangentThroughType> iterator; };
	MemberElement<t::CLineTransformType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CLineTransformType> iterator; };
	MemberElement<t::CLineExtractType, _altova_mi_t_altova_CLineConstructionMethodType_altova_Extract> Extract;
	struct Extract { typedef Iterator<t::CLineExtractType> iterator; };
	MemberElement<t::CLineFromScanType, _altova_mi_t_altova_CLineConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CLineFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineConstructionMethodType
