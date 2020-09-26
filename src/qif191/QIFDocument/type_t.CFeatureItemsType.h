#pragma once



namespace qif191
{

namespace t
{	

class CFeatureItemsType : public TypeBase
{
public:
	QIF191_EXPORT CFeatureItemsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureItemsType(CFeatureItemsType const& init);
	void operator=(CFeatureItemsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureItemsType); }
	MemberElement<t::CFeatureItemBaseType, _altova_mi_t_altova_CFeatureItemsType_altova_FeatureItem> FeatureItem;
	struct FeatureItem { typedef Iterator<t::CFeatureItemBaseType> iterator; };
	MemberElement<t::CArcFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_ArcFeatureItem> ArcFeatureItem;
	struct ArcFeatureItem { typedef Iterator<t::CArcFeatureItemType> iterator; };
	MemberElement<t::CCircleFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_CircleFeatureItem> CircleFeatureItem;
	struct CircleFeatureItem { typedef Iterator<t::CCircleFeatureItemType> iterator; };
	MemberElement<t::CCompoundFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_CompoundFeatureItem> CompoundFeatureItem;
	struct CompoundFeatureItem { typedef Iterator<t::CCompoundFeatureItemType> iterator; };
	MemberElement<t::CConeFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_ConeFeatureItem> ConeFeatureItem;
	struct ConeFeatureItem { typedef Iterator<t::CConeFeatureItemType> iterator; };
	MemberElement<t::CConicalSegmentFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_ConicalSegmentFeatureItem> ConicalSegmentFeatureItem;
	struct ConicalSegmentFeatureItem { typedef Iterator<t::CConicalSegmentFeatureItemType> iterator; };
	MemberElement<t::CCuboidFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_CuboidFeatureItem> CuboidFeatureItem;
	struct CuboidFeatureItem { typedef Iterator<t::CCuboidFeatureItemType> iterator; };
	MemberElement<t::CCylinderFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_CylinderFeatureItem> CylinderFeatureItem;
	struct CylinderFeatureItem { typedef Iterator<t::CCylinderFeatureItemType> iterator; };
	MemberElement<t::CCylindricalSegmentFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_CylindricalSegmentFeatureItem> CylindricalSegmentFeatureItem;
	struct CylindricalSegmentFeatureItem { typedef Iterator<t::CCylindricalSegmentFeatureItemType> iterator; };
	MemberElement<t::CEdgePointFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_EdgePointFeatureItem> EdgePointFeatureItem;
	struct EdgePointFeatureItem { typedef Iterator<t::CEdgePointFeatureItemType> iterator; };
	MemberElement<t::CEllipseFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_EllipseFeatureItem> EllipseFeatureItem;
	struct EllipseFeatureItem { typedef Iterator<t::CEllipseFeatureItemType> iterator; };
	MemberElement<t::CElongatedCylinderFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_ElongatedCylinderFeatureItem> ElongatedCylinderFeatureItem;
	struct ElongatedCylinderFeatureItem { typedef Iterator<t::CElongatedCylinderFeatureItemType> iterator; };
	MemberElement<t::CExtrudedCrossSectionFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_ExtrudedCrossSectionFeatureItem> ExtrudedCrossSectionFeatureItem;
	struct ExtrudedCrossSectionFeatureItem { typedef Iterator<t::CExtrudedCrossSectionFeatureItemType> iterator; };
	MemberElement<t::CGenericFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_GenericFeatureItem> GenericFeatureItem;
	struct GenericFeatureItem { typedef Iterator<t::CGenericFeatureItemType> iterator; };
	MemberElement<t::CLineFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_LineFeatureItem> LineFeatureItem;
	struct LineFeatureItem { typedef Iterator<t::CLineFeatureItemType> iterator; };
	MemberElement<t::COppositeLinesFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_OppositeLinesFeatureItem> OppositeLinesFeatureItem;
	struct OppositeLinesFeatureItem { typedef Iterator<t::COppositeLinesFeatureItemType> iterator; };
	MemberElement<t::COppositePlanesFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_OppositePlanesFeatureItem> OppositePlanesFeatureItem;
	struct OppositePlanesFeatureItem { typedef Iterator<t::COppositePlanesFeatureItemType> iterator; };
	MemberElement<t::CPatternFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_PatternFeatureItem> PatternFeatureItem;
	struct PatternFeatureItem { typedef Iterator<t::CPatternFeatureItemType> iterator; };
	MemberElement<t::CPlaneFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_PlaneFeatureItem> PlaneFeatureItem;
	struct PlaneFeatureItem { typedef Iterator<t::CPlaneFeatureItemType> iterator; };
	MemberElement<t::CPointDefinedCurveFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_PointDefinedCurveFeatureItem> PointDefinedCurveFeatureItem;
	struct PointDefinedCurveFeatureItem { typedef Iterator<t::CPointDefinedCurveFeatureItemType> iterator; };
	MemberElement<t::CPointDefinedSurfaceFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_PointDefinedSurfaceFeatureItem> PointDefinedSurfaceFeatureItem;
	struct PointDefinedSurfaceFeatureItem { typedef Iterator<t::CPointDefinedSurfaceFeatureItemType> iterator; };
	MemberElement<t::CPointFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_PointFeatureItem> PointFeatureItem;
	struct PointFeatureItem { typedef Iterator<t::CPointFeatureItemType> iterator; };
	MemberElement<t::CProfileGroupFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_ProfileGroupFeatureItem> ProfileGroupFeatureItem;
	struct ProfileGroupFeatureItem { typedef Iterator<t::CProfileGroupFeatureItemType> iterator; };
	MemberElement<t::CRunoutGroupFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_RunoutGroupFeatureItem> RunoutGroupFeatureItem;
	struct RunoutGroupFeatureItem { typedef Iterator<t::CRunoutGroupFeatureItemType> iterator; };
	MemberElement<t::CSphereFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_SphereFeatureItem> SphereFeatureItem;
	struct SphereFeatureItem { typedef Iterator<t::CSphereFeatureItemType> iterator; };
	MemberElement<t::CSphericalSegmentFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_SphericalSegmentFeatureItem> SphericalSegmentFeatureItem;
	struct SphericalSegmentFeatureItem { typedef Iterator<t::CSphericalSegmentFeatureItemType> iterator; };
	MemberElement<t::CSurfaceOfRevolutionFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_SurfaceOfRevolutionFeatureItem> SurfaceOfRevolutionFeatureItem;
	struct SurfaceOfRevolutionFeatureItem { typedef Iterator<t::CSurfaceOfRevolutionFeatureItemType> iterator; };
	MemberElement<t::CThreadedFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_ThreadedFeatureItem> ThreadedFeatureItem;
	struct ThreadedFeatureItem { typedef Iterator<t::CThreadedFeatureItemType> iterator; };
	MemberElement<t::CToroidalSegmentFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_ToroidalSegmentFeatureItem> ToroidalSegmentFeatureItem;
	struct ToroidalSegmentFeatureItem { typedef Iterator<t::CToroidalSegmentFeatureItemType> iterator; };
	MemberElement<t::CTorusFeatureItemType, _altova_mi_t_altova_CFeatureItemsType_altova_TorusFeatureItem> TorusFeatureItem;
	struct TorusFeatureItem { typedef Iterator<t::CTorusFeatureItemType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureItemsType
