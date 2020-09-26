#pragma once



namespace qif191
{

namespace t
{	

class CCircleConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CCircleConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircleConstructionMethodType(CCircleConstructionMethodType const& init);
	void operator=(CCircleConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircleConstructionMethodType); }
	MemberElement<t::CCircleBestFitType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CCircleBestFitType> iterator; };
	MemberElement<t::CCircleRecompType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CCircleRecompType> iterator; };
	MemberElement<t::CCircleIntersectionType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_Intersection> Intersection;
	struct Intersection { typedef Iterator<t::CCircleIntersectionType> iterator; };
	MemberElement<t::CCircleProjectionType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_Projection> Projection;
	struct Projection { typedef Iterator<t::CCircleProjectionType> iterator; };
	MemberElement<t::CCircleCopyType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CCircleCopyType> iterator; };
	MemberElement<t::CCircleCastType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CCircleCastType> iterator; };
	MemberElement<t::CCircleTangentType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_Tangent> Tangent;
	struct Tangent { typedef Iterator<t::CCircleTangentType> iterator; };
	MemberElement<t::CCircleTangentThroughType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_TangentThrough> TangentThrough;
	struct TangentThrough { typedef Iterator<t::CCircleTangentThroughType> iterator; };
	MemberElement<t::CCircleTransformType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CCircleTransformType> iterator; };
	MemberElement<t::CCircleFromConeType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_FromCone> FromCone;
	struct FromCone { typedef Iterator<t::CCircleFromConeType> iterator; };
	MemberElement<t::CCircleFromScanType, _altova_mi_t_altova_CCircleConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CCircleFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircleConstructionMethodType
