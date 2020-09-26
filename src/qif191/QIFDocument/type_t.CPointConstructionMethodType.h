#pragma once



namespace qif191
{

namespace t
{	

class CPointConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CPointConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointConstructionMethodType(CPointConstructionMethodType const& init);
	void operator=(CPointConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointConstructionMethodType); }
	MemberElement<t::CPointFeatureIntersectionType, _altova_mi_t_altova_CPointConstructionMethodType_altova_Intersection> Intersection;
	struct Intersection { typedef Iterator<t::CPointFeatureIntersectionType> iterator; };
	MemberElement<t::CPointFeatureProjectionType, _altova_mi_t_altova_CPointConstructionMethodType_altova_Projection> Projection;
	struct Projection { typedef Iterator<t::CPointFeatureProjectionType> iterator; };
	MemberElement<t::CPointFeatureCopyType, _altova_mi_t_altova_CPointConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CPointFeatureCopyType> iterator; };
	MemberElement<t::CPointFeatureCastType, _altova_mi_t_altova_CPointConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CPointFeatureCastType> iterator; };
	MemberElement<t::CPointFeatureTransformType, _altova_mi_t_altova_CPointConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CPointFeatureTransformType> iterator; };
	MemberElement<t::CPointFeatureFromConeType, _altova_mi_t_altova_CPointConstructionMethodType_altova_FromCone> FromCone;
	struct FromCone { typedef Iterator<t::CPointFeatureFromConeType> iterator; };
	MemberElement<t::CPointFeatureFromScanType, _altova_mi_t_altova_CPointConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CPointFeatureFromScanType> iterator; };
	MemberElement<t::CPointFeatureCenterOfGravityType, _altova_mi_t_altova_CPointConstructionMethodType_altova_CenterOfGravity> CenterOfGravity;
	struct CenterOfGravity { typedef Iterator<t::CPointFeatureCenterOfGravityType> iterator; };
	MemberElement<t::CPointFeaturePierceType, _altova_mi_t_altova_CPointConstructionMethodType_altova_Pierce> Pierce;
	struct Pierce { typedef Iterator<t::CPointFeaturePierceType> iterator; };
	MemberElement<t::CPointFeatureMidPointType, _altova_mi_t_altova_CPointConstructionMethodType_altova_MidPoint> MidPoint;
	struct MidPoint { typedef Iterator<t::CPointFeatureMidPointType> iterator; };
	MemberElement<t::CPointFeatureMovePointType, _altova_mi_t_altova_CPointConstructionMethodType_altova_MovePoint> MovePoint;
	struct MovePoint { typedef Iterator<t::CPointFeatureMovePointType> iterator; };
	MemberElement<t::CPointFeatureMovePointVectorType, _altova_mi_t_altova_CPointConstructionMethodType_altova_MovePointVector> MovePointVector;
	struct MovePointVector { typedef Iterator<t::CPointFeatureMovePointVectorType> iterator; };
	MemberElement<t::CPointFeatureMovePointAxisType, _altova_mi_t_altova_CPointConstructionMethodType_altova_MovePointAxis> MovePointAxis;
	struct MovePointAxis { typedef Iterator<t::CPointFeatureMovePointAxisType> iterator; };
	MemberElement<t::CPointFeatureExtremeType, _altova_mi_t_altova_CPointConstructionMethodType_altova_Extreme> Extreme;
	struct Extreme { typedef Iterator<t::CPointFeatureExtremeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointConstructionMethodType
