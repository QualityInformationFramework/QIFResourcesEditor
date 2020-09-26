#pragma once



namespace qif191
{

namespace t
{	

class CFeatureNominalsType : public TypeBase
{
public:
	QIF191_EXPORT CFeatureNominalsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureNominalsType(CFeatureNominalsType const& init);
	void operator=(CFeatureNominalsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureNominalsType); }
	MemberElement<t::CFeatureNominalBaseType, _altova_mi_t_altova_CFeatureNominalsType_altova_FeatureNominal> FeatureNominal;
	struct FeatureNominal { typedef Iterator<t::CFeatureNominalBaseType> iterator; };
	MemberElement<t::CArcFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_ArcFeatureNominal> ArcFeatureNominal;
	struct ArcFeatureNominal { typedef Iterator<t::CArcFeatureNominalType> iterator; };
	MemberElement<t::CCircleFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_CircleFeatureNominal> CircleFeatureNominal;
	struct CircleFeatureNominal { typedef Iterator<t::CCircleFeatureNominalType> iterator; };
	MemberElement<t::CCompoundFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_CompoundFeatureNominal> CompoundFeatureNominal;
	struct CompoundFeatureNominal { typedef Iterator<t::CCompoundFeatureNominalType> iterator; };
	MemberElement<t::CConeFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_ConeFeatureNominal> ConeFeatureNominal;
	struct ConeFeatureNominal { typedef Iterator<t::CConeFeatureNominalType> iterator; };
	MemberElement<t::CConicalSegmentFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_ConicalSegmentFeatureNominal> ConicalSegmentFeatureNominal;
	struct ConicalSegmentFeatureNominal { typedef Iterator<t::CConicalSegmentFeatureNominalType> iterator; };
	MemberElement<t::CCuboidFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_CuboidFeatureNominal> CuboidFeatureNominal;
	struct CuboidFeatureNominal { typedef Iterator<t::CCuboidFeatureNominalType> iterator; };
	MemberElement<t::CCylinderFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_CylinderFeatureNominal> CylinderFeatureNominal;
	struct CylinderFeatureNominal { typedef Iterator<t::CCylinderFeatureNominalType> iterator; };
	MemberElement<t::CCylindricalSegmentFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_CylindricalSegmentFeatureNominal> CylindricalSegmentFeatureNominal;
	struct CylindricalSegmentFeatureNominal { typedef Iterator<t::CCylindricalSegmentFeatureNominalType> iterator; };
	MemberElement<t::CEdgePointFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_EdgePointFeatureNominal> EdgePointFeatureNominal;
	struct EdgePointFeatureNominal { typedef Iterator<t::CEdgePointFeatureNominalType> iterator; };
	MemberElement<t::CEllipseFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_EllipseFeatureNominal> EllipseFeatureNominal;
	struct EllipseFeatureNominal { typedef Iterator<t::CEllipseFeatureNominalType> iterator; };
	MemberElement<t::CElongatedCylinderFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_ElongatedCylinderFeatureNominal> ElongatedCylinderFeatureNominal;
	struct ElongatedCylinderFeatureNominal { typedef Iterator<t::CElongatedCylinderFeatureNominalType> iterator; };
	MemberElement<t::CExtrudedCrossSectionFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_ExtrudedCrossSectionFeatureNominal> ExtrudedCrossSectionFeatureNominal;
	struct ExtrudedCrossSectionFeatureNominal { typedef Iterator<t::CExtrudedCrossSectionFeatureNominalType> iterator; };
	MemberElement<t::CGenericFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_GenericFeatureNominal> GenericFeatureNominal;
	struct GenericFeatureNominal { typedef Iterator<t::CGenericFeatureNominalType> iterator; };
	MemberElement<t::CLineFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_LineFeatureNominal> LineFeatureNominal;
	struct LineFeatureNominal { typedef Iterator<t::CLineFeatureNominalType> iterator; };
	MemberElement<t::COppositeLinesFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_OppositeLinesFeatureNominal> OppositeLinesFeatureNominal;
	struct OppositeLinesFeatureNominal { typedef Iterator<t::COppositeLinesFeatureNominalType> iterator; };
	MemberElement<t::COppositePlanesFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_OppositePlanesFeatureNominal> OppositePlanesFeatureNominal;
	struct OppositePlanesFeatureNominal { typedef Iterator<t::COppositePlanesFeatureNominalType> iterator; };
	MemberElement<t::CPatternFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_PatternFeatureNominal> PatternFeatureNominal;
	struct PatternFeatureNominal { typedef Iterator<t::CPatternFeatureNominalType> iterator; };
	MemberElement<t::CPlaneFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_PlaneFeatureNominal> PlaneFeatureNominal;
	struct PlaneFeatureNominal { typedef Iterator<t::CPlaneFeatureNominalType> iterator; };
	MemberElement<t::CPointDefinedCurveFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_PointDefinedCurveFeatureNominal> PointDefinedCurveFeatureNominal;
	struct PointDefinedCurveFeatureNominal { typedef Iterator<t::CPointDefinedCurveFeatureNominalType> iterator; };
	MemberElement<t::CPointDefinedSurfaceFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_PointDefinedSurfaceFeatureNominal> PointDefinedSurfaceFeatureNominal;
	struct PointDefinedSurfaceFeatureNominal { typedef Iterator<t::CPointDefinedSurfaceFeatureNominalType> iterator; };
	MemberElement<t::CPointFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_PointFeatureNominal> PointFeatureNominal;
	struct PointFeatureNominal { typedef Iterator<t::CPointFeatureNominalType> iterator; };
	MemberElement<t::CProfileGroupFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_ProfileGroupFeatureNominal> ProfileGroupFeatureNominal;
	struct ProfileGroupFeatureNominal { typedef Iterator<t::CProfileGroupFeatureNominalType> iterator; };
	MemberElement<t::CRunoutGroupFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_RunoutGroupFeatureNominal> RunoutGroupFeatureNominal;
	struct RunoutGroupFeatureNominal { typedef Iterator<t::CRunoutGroupFeatureNominalType> iterator; };
	MemberElement<t::CSphereFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_SphereFeatureNominal> SphereFeatureNominal;
	struct SphereFeatureNominal { typedef Iterator<t::CSphereFeatureNominalType> iterator; };
	MemberElement<t::CSphericalSegmentFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_SphericalSegmentFeatureNominal> SphericalSegmentFeatureNominal;
	struct SphericalSegmentFeatureNominal { typedef Iterator<t::CSphericalSegmentFeatureNominalType> iterator; };
	MemberElement<t::CSurfaceOfRevolutionFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_SurfaceOfRevolutionFeatureNominal> SurfaceOfRevolutionFeatureNominal;
	struct SurfaceOfRevolutionFeatureNominal { typedef Iterator<t::CSurfaceOfRevolutionFeatureNominalType> iterator; };
	MemberElement<t::CThreadedFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_ThreadedFeatureNominal> ThreadedFeatureNominal;
	struct ThreadedFeatureNominal { typedef Iterator<t::CThreadedFeatureNominalType> iterator; };
	MemberElement<t::CToroidalSegmentFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_ToroidalSegmentFeatureNominal> ToroidalSegmentFeatureNominal;
	struct ToroidalSegmentFeatureNominal { typedef Iterator<t::CToroidalSegmentFeatureNominalType> iterator; };
	MemberElement<t::CTorusFeatureNominalType, _altova_mi_t_altova_CFeatureNominalsType_altova_TorusFeatureNominal> TorusFeatureNominal;
	struct TorusFeatureNominal { typedef Iterator<t::CTorusFeatureNominalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureNominalsType
