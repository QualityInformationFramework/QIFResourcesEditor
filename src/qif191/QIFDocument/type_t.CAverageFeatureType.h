#pragma once



namespace qif191
{

namespace t
{	

class CAverageFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CAverageFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAverageFeatureType(CAverageFeatureType const& init);
	void operator=(CAverageFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAverageFeatureType); }
	MemberElement<t::CFeatureActualBaseType, _altova_mi_t_altova_CAverageFeatureType_altova_FeatureActual> FeatureActual;
	struct FeatureActual { typedef Iterator<t::CFeatureActualBaseType> iterator; };
	MemberElement<t::CArcFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_ArcFeatureActual> ArcFeatureActual;
	struct ArcFeatureActual { typedef Iterator<t::CArcFeatureActualType> iterator; };
	MemberElement<t::CCircleFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_CircleFeatureActual> CircleFeatureActual;
	struct CircleFeatureActual { typedef Iterator<t::CCircleFeatureActualType> iterator; };
	MemberElement<t::CCompoundFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_CompoundFeatureActual> CompoundFeatureActual;
	struct CompoundFeatureActual { typedef Iterator<t::CCompoundFeatureActualType> iterator; };
	MemberElement<t::CConeFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_ConeFeatureActual> ConeFeatureActual;
	struct ConeFeatureActual { typedef Iterator<t::CConeFeatureActualType> iterator; };
	MemberElement<t::CConicalSegmentFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_ConicalSegmentFeatureActual> ConicalSegmentFeatureActual;
	struct ConicalSegmentFeatureActual { typedef Iterator<t::CConicalSegmentFeatureActualType> iterator; };
	MemberElement<t::CCuboidFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_CuboidFeatureActual> CuboidFeatureActual;
	struct CuboidFeatureActual { typedef Iterator<t::CCuboidFeatureActualType> iterator; };
	MemberElement<t::CCylinderFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_CylinderFeatureActual> CylinderFeatureActual;
	struct CylinderFeatureActual { typedef Iterator<t::CCylinderFeatureActualType> iterator; };
	MemberElement<t::CCylindricalSegmentFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_CylindricalSegmentFeatureActual> CylindricalSegmentFeatureActual;
	struct CylindricalSegmentFeatureActual { typedef Iterator<t::CCylindricalSegmentFeatureActualType> iterator; };
	MemberElement<t::CEdgePointFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_EdgePointFeatureActual> EdgePointFeatureActual;
	struct EdgePointFeatureActual { typedef Iterator<t::CEdgePointFeatureActualType> iterator; };
	MemberElement<t::CEllipseFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_EllipseFeatureActual> EllipseFeatureActual;
	struct EllipseFeatureActual { typedef Iterator<t::CEllipseFeatureActualType> iterator; };
	MemberElement<t::CElongatedCylinderFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_ElongatedCylinderFeatureActual> ElongatedCylinderFeatureActual;
	struct ElongatedCylinderFeatureActual { typedef Iterator<t::CElongatedCylinderFeatureActualType> iterator; };
	MemberElement<t::CExtrudedCrossSectionFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_ExtrudedCrossSectionFeatureActual> ExtrudedCrossSectionFeatureActual;
	struct ExtrudedCrossSectionFeatureActual { typedef Iterator<t::CExtrudedCrossSectionFeatureActualType> iterator; };
	MemberElement<t::CGenericFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_GenericFeatureActual> GenericFeatureActual;
	struct GenericFeatureActual { typedef Iterator<t::CGenericFeatureActualType> iterator; };
	MemberElement<t::CLineFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_LineFeatureActual> LineFeatureActual;
	struct LineFeatureActual { typedef Iterator<t::CLineFeatureActualType> iterator; };
	MemberElement<t::COppositeLinesFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_OppositeLinesFeatureActual> OppositeLinesFeatureActual;
	struct OppositeLinesFeatureActual { typedef Iterator<t::COppositeLinesFeatureActualType> iterator; };
	MemberElement<t::COppositePlanesFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_OppositePlanesFeatureActual> OppositePlanesFeatureActual;
	struct OppositePlanesFeatureActual { typedef Iterator<t::COppositePlanesFeatureActualType> iterator; };
	MemberElement<t::CPatternFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_PatternFeatureActual> PatternFeatureActual;
	struct PatternFeatureActual { typedef Iterator<t::CPatternFeatureActualType> iterator; };
	MemberElement<t::CPlaneFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_PlaneFeatureActual> PlaneFeatureActual;
	struct PlaneFeatureActual { typedef Iterator<t::CPlaneFeatureActualType> iterator; };
	MemberElement<t::CPointDefinedCurveFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_PointDefinedCurveFeatureActual> PointDefinedCurveFeatureActual;
	struct PointDefinedCurveFeatureActual { typedef Iterator<t::CPointDefinedCurveFeatureActualType> iterator; };
	MemberElement<t::CPointDefinedSurfaceFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_PointDefinedSurfaceFeatureActual> PointDefinedSurfaceFeatureActual;
	struct PointDefinedSurfaceFeatureActual { typedef Iterator<t::CPointDefinedSurfaceFeatureActualType> iterator; };
	MemberElement<t::CPointFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_PointFeatureActual> PointFeatureActual;
	struct PointFeatureActual { typedef Iterator<t::CPointFeatureActualType> iterator; };
	MemberElement<t::CProfileGroupFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_ProfileGroupFeatureActual> ProfileGroupFeatureActual;
	struct ProfileGroupFeatureActual { typedef Iterator<t::CProfileGroupFeatureActualType> iterator; };
	MemberElement<t::CRunoutGroupFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_RunoutGroupFeatureActual> RunoutGroupFeatureActual;
	struct RunoutGroupFeatureActual { typedef Iterator<t::CRunoutGroupFeatureActualType> iterator; };
	MemberElement<t::CSphereFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_SphereFeatureActual> SphereFeatureActual;
	struct SphereFeatureActual { typedef Iterator<t::CSphereFeatureActualType> iterator; };
	MemberElement<t::CSphericalSegmentFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_SphericalSegmentFeatureActual> SphericalSegmentFeatureActual;
	struct SphericalSegmentFeatureActual { typedef Iterator<t::CSphericalSegmentFeatureActualType> iterator; };
	MemberElement<t::CSurfaceOfRevolutionFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_SurfaceOfRevolutionFeatureActual> SurfaceOfRevolutionFeatureActual;
	struct SurfaceOfRevolutionFeatureActual { typedef Iterator<t::CSurfaceOfRevolutionFeatureActualType> iterator; };
	MemberElement<t::CThreadedFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_ThreadedFeatureActual> ThreadedFeatureActual;
	struct ThreadedFeatureActual { typedef Iterator<t::CThreadedFeatureActualType> iterator; };
	MemberElement<t::CToroidalSegmentFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_ToroidalSegmentFeatureActual> ToroidalSegmentFeatureActual;
	struct ToroidalSegmentFeatureActual { typedef Iterator<t::CToroidalSegmentFeatureActualType> iterator; };
	MemberElement<t::CTorusFeatureActualType, _altova_mi_t_altova_CAverageFeatureType_altova_TorusFeatureActual> TorusFeatureActual;
	struct TorusFeatureActual { typedef Iterator<t::CTorusFeatureActualType> iterator; };
	MemberElement<t::CStatsArrayIdType, _altova_mi_t_altova_CAverageFeatureType_altova_ActualIds> ActualIds;
	struct ActualIds { typedef Iterator<t::CStatsArrayIdType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAverageFeatureType
