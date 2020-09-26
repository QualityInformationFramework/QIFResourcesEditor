#pragma once



namespace qif191
{

namespace t
{	

class CFeatureDefinitionsType : public TypeBase
{
public:
	QIF191_EXPORT CFeatureDefinitionsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureDefinitionsType(CFeatureDefinitionsType const& init);
	void operator=(CFeatureDefinitionsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureDefinitionsType); }
	MemberElement<t::CFeatureDefinitionBaseType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_FeatureDefinition> FeatureDefinition;
	struct FeatureDefinition { typedef Iterator<t::CFeatureDefinitionBaseType> iterator; };
	MemberElement<t::CArcFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_ArcFeatureDefinition> ArcFeatureDefinition;
	struct ArcFeatureDefinition { typedef Iterator<t::CArcFeatureDefinitionType> iterator; };
	MemberElement<t::CCircleFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_CircleFeatureDefinition> CircleFeatureDefinition;
	struct CircleFeatureDefinition { typedef Iterator<t::CCircleFeatureDefinitionType> iterator; };
	MemberElement<t::CCompoundFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_CompoundFeatureDefinition> CompoundFeatureDefinition;
	struct CompoundFeatureDefinition { typedef Iterator<t::CCompoundFeatureDefinitionType> iterator; };
	MemberElement<t::CConeFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_ConeFeatureDefinition> ConeFeatureDefinition;
	struct ConeFeatureDefinition { typedef Iterator<t::CConeFeatureDefinitionType> iterator; };
	MemberElement<t::CConicalSegmentFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_ConicalSegmentFeatureDefinition> ConicalSegmentFeatureDefinition;
	struct ConicalSegmentFeatureDefinition { typedef Iterator<t::CConicalSegmentFeatureDefinitionType> iterator; };
	MemberElement<t::CCuboidFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_CuboidFeatureDefinition> CuboidFeatureDefinition;
	struct CuboidFeatureDefinition { typedef Iterator<t::CCuboidFeatureDefinitionType> iterator; };
	MemberElement<t::CCylinderFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_CylinderFeatureDefinition> CylinderFeatureDefinition;
	struct CylinderFeatureDefinition { typedef Iterator<t::CCylinderFeatureDefinitionType> iterator; };
	MemberElement<t::CCylindricalSegmentFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_CylindricalSegmentFeatureDefinition> CylindricalSegmentFeatureDefinition;
	struct CylindricalSegmentFeatureDefinition { typedef Iterator<t::CCylindricalSegmentFeatureDefinitionType> iterator; };
	MemberElement<t::CEdgePointFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_EdgePointFeatureDefinition> EdgePointFeatureDefinition;
	struct EdgePointFeatureDefinition { typedef Iterator<t::CEdgePointFeatureDefinitionType> iterator; };
	MemberElement<t::CEllipseFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_EllipseFeatureDefinition> EllipseFeatureDefinition;
	struct EllipseFeatureDefinition { typedef Iterator<t::CEllipseFeatureDefinitionType> iterator; };
	MemberElement<t::CElongatedCylinderFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_ElongatedCylinderFeatureDefinition> ElongatedCylinderFeatureDefinition;
	struct ElongatedCylinderFeatureDefinition { typedef Iterator<t::CElongatedCylinderFeatureDefinitionType> iterator; };
	MemberElement<t::CExtrudedCrossSectionFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_ExtrudedCrossSectionFeatureDefinition> ExtrudedCrossSectionFeatureDefinition;
	struct ExtrudedCrossSectionFeatureDefinition { typedef Iterator<t::CExtrudedCrossSectionFeatureDefinitionType> iterator; };
	MemberElement<t::CGenericFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_GenericFeatureDefinition> GenericFeatureDefinition;
	struct GenericFeatureDefinition { typedef Iterator<t::CGenericFeatureDefinitionType> iterator; };
	MemberElement<t::CLineFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_LineFeatureDefinition> LineFeatureDefinition;
	struct LineFeatureDefinition { typedef Iterator<t::CLineFeatureDefinitionType> iterator; };
	MemberElement<t::COppositeLinesFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_OppositeLinesFeatureDefinition> OppositeLinesFeatureDefinition;
	struct OppositeLinesFeatureDefinition { typedef Iterator<t::COppositeLinesFeatureDefinitionType> iterator; };
	MemberElement<t::COppositePlanesFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_OppositePlanesFeatureDefinition> OppositePlanesFeatureDefinition;
	struct OppositePlanesFeatureDefinition { typedef Iterator<t::COppositePlanesFeatureDefinitionType> iterator; };
	MemberElement<t::CPatternFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_PatternFeatureDefinition> PatternFeatureDefinition;
	struct PatternFeatureDefinition { typedef Iterator<t::CPatternFeatureDefinitionType> iterator; };
	MemberElement<t::CPlaneFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_PlaneFeatureDefinition> PlaneFeatureDefinition;
	struct PlaneFeatureDefinition { typedef Iterator<t::CPlaneFeatureDefinitionType> iterator; };
	MemberElement<t::CPointDefinedCurveFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_PointDefinedCurveFeatureDefinition> PointDefinedCurveFeatureDefinition;
	struct PointDefinedCurveFeatureDefinition { typedef Iterator<t::CPointDefinedCurveFeatureDefinitionType> iterator; };
	MemberElement<t::CPointDefinedSurfaceFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_PointDefinedSurfaceFeatureDefinition> PointDefinedSurfaceFeatureDefinition;
	struct PointDefinedSurfaceFeatureDefinition { typedef Iterator<t::CPointDefinedSurfaceFeatureDefinitionType> iterator; };
	MemberElement<t::CPointFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_PointFeatureDefinition> PointFeatureDefinition;
	struct PointFeatureDefinition { typedef Iterator<t::CPointFeatureDefinitionType> iterator; };
	MemberElement<t::CProfileGroupFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_ProfileGroupFeatureDefinition> ProfileGroupFeatureDefinition;
	struct ProfileGroupFeatureDefinition { typedef Iterator<t::CProfileGroupFeatureDefinitionType> iterator; };
	MemberElement<t::CRunoutGroupFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_RunoutGroupFeatureDefinition> RunoutGroupFeatureDefinition;
	struct RunoutGroupFeatureDefinition { typedef Iterator<t::CRunoutGroupFeatureDefinitionType> iterator; };
	MemberElement<t::CSphereFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_SphereFeatureDefinition> SphereFeatureDefinition;
	struct SphereFeatureDefinition { typedef Iterator<t::CSphereFeatureDefinitionType> iterator; };
	MemberElement<t::CSphericalSegmentFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_SphericalSegmentFeatureDefinition> SphericalSegmentFeatureDefinition;
	struct SphericalSegmentFeatureDefinition { typedef Iterator<t::CSphericalSegmentFeatureDefinitionType> iterator; };
	MemberElement<t::CSurfaceOfRevolutionFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_SurfaceOfRevolutionFeatureDefinition> SurfaceOfRevolutionFeatureDefinition;
	struct SurfaceOfRevolutionFeatureDefinition { typedef Iterator<t::CSurfaceOfRevolutionFeatureDefinitionType> iterator; };
	MemberElement<t::CThreadedFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_ThreadedFeatureDefinition> ThreadedFeatureDefinition;
	struct ThreadedFeatureDefinition { typedef Iterator<t::CThreadedFeatureDefinitionType> iterator; };
	MemberElement<t::CToroidalSegmentFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_ToroidalSegmentFeatureDefinition> ToroidalSegmentFeatureDefinition;
	struct ToroidalSegmentFeatureDefinition { typedef Iterator<t::CToroidalSegmentFeatureDefinitionType> iterator; };
	MemberElement<t::CTorusFeatureDefinitionType, _altova_mi_t_altova_CFeatureDefinitionsType_altova_TorusFeatureDefinition> TorusFeatureDefinition;
	struct TorusFeatureDefinition { typedef Iterator<t::CTorusFeatureDefinitionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureDefinitionsType
