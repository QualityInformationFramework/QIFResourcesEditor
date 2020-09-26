#pragma once



namespace qif191
{

namespace t
{	

class CPlaneConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CPlaneConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneConstructionMethodType(CPlaneConstructionMethodType const& init);
	void operator=(CPlaneConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneConstructionMethodType); }
	MemberElement<t::CPlaneBestFitType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CPlaneBestFitType> iterator; };
	MemberElement<t::CPlaneRecompType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CPlaneRecompType> iterator; };
	MemberElement<t::CPlaneMidplaneType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_Midplane> Midplane;
	struct Midplane { typedef Iterator<t::CPlaneMidplaneType> iterator; };
	MemberElement<t::CPlaneOffsetType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_Offset> Offset;
	struct Offset { typedef Iterator<t::CPlaneOffsetType> iterator; };
	MemberElement<t::CPlanePerpendicularType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_Perpendicular> Perpendicular;
	struct Perpendicular { typedef Iterator<t::CPlanePerpendicularType> iterator; };
	MemberElement<t::CPlaneParallelType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_Parallel> Parallel;
	struct Parallel { typedef Iterator<t::CPlaneParallelType> iterator; };
	MemberElement<t::CPlaneCopyType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CPlaneCopyType> iterator; };
	MemberElement<t::CPlaneCastType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CPlaneCastType> iterator; };
	MemberElement<t::CPlaneTangentThroughType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_TangentThrough> TangentThrough;
	struct TangentThrough { typedef Iterator<t::CPlaneTangentThroughType> iterator; };
	MemberElement<t::CPlaneTransformType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CPlaneTransformType> iterator; };
	MemberElement<t::CPlaneExtractType, _altova_mi_t_altova_CPlaneConstructionMethodType_altova_Extract> Extract;
	struct Extract { typedef Iterator<t::CPlaneExtractType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneConstructionMethodType
