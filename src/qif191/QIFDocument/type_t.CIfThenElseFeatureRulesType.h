#pragma once



namespace qif191
{

namespace t
{	

class CIfThenElseFeatureRulesType : public TypeBase
{
public:
	QIF191_EXPORT CIfThenElseFeatureRulesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenElseFeatureRulesType(CIfThenElseFeatureRulesType const& init);
	void operator=(CIfThenElseFeatureRulesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenElseFeatureRulesType); }
	MemberElement<t::CIfThenFeatureRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenFeatureRule> IfThenFeatureRule;
	struct IfThenFeatureRule { typedef Iterator<t::CIfThenFeatureRuleType> iterator; };
	MemberElement<t::CIfThenArcRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenArcRule> IfThenArcRule;
	struct IfThenArcRule { typedef Iterator<t::CIfThenArcRuleType> iterator; };
	MemberElement<t::CIfThenCircleRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenCircleRule> IfThenCircleRule;
	struct IfThenCircleRule { typedef Iterator<t::CIfThenCircleRuleType> iterator; };
	MemberElement<t::CIfThenConeRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenConeRule> IfThenConeRule;
	struct IfThenConeRule { typedef Iterator<t::CIfThenConeRuleType> iterator; };
	MemberElement<t::CIfThenConicalSegmentRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenConicalSegmentRule> IfThenConicalSegmentRule;
	struct IfThenConicalSegmentRule { typedef Iterator<t::CIfThenConicalSegmentRuleType> iterator; };
	MemberElement<t::CIfThenCuboidRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenCuboidRule> IfThenCuboidRule;
	struct IfThenCuboidRule { typedef Iterator<t::CIfThenCuboidRuleType> iterator; };
	MemberElement<t::CIfThenCurveRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenCurveRule> IfThenCurveRule;
	struct IfThenCurveRule { typedef Iterator<t::CIfThenCurveRuleType> iterator; };
	MemberElement<t::CIfThenCylinderRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenCylinderRule> IfThenCylinderRule;
	struct IfThenCylinderRule { typedef Iterator<t::CIfThenCylinderRuleType> iterator; };
	MemberElement<t::CIfThenCylindricalSegmentRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenCylindricalSegmentRule> IfThenCylindricalSegmentRule;
	struct IfThenCylindricalSegmentRule { typedef Iterator<t::CIfThenCylindricalSegmentRuleType> iterator; };
	MemberElement<t::CIfThenEllipseRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenEllipseRule> IfThenEllipseRule;
	struct IfThenEllipseRule { typedef Iterator<t::CIfThenEllipseRuleType> iterator; };
	MemberElement<t::CIfThenElongatedCylinderRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenElongatedCylinderRule> IfThenElongatedCylinderRule;
	struct IfThenElongatedCylinderRule { typedef Iterator<t::CIfThenElongatedCylinderRuleType> iterator; };
	MemberElement<t::CIfThenExtrudedCrossSectionRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenExtrudedCrossSectionRule> IfThenExtrudedCrossSectionRule;
	struct IfThenExtrudedCrossSectionRule { typedef Iterator<t::CIfThenExtrudedCrossSectionRuleType> iterator; };
	MemberElement<t::CIfThenLineRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenLineRule> IfThenLineRule;
	struct IfThenLineRule { typedef Iterator<t::CIfThenLineRuleType> iterator; };
	MemberElement<t::CIfThenOppositeLinesRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenOppositeLinesRule> IfThenOppositeLinesRule;
	struct IfThenOppositeLinesRule { typedef Iterator<t::CIfThenOppositeLinesRuleType> iterator; };
	MemberElement<t::CIfThenOppositePlanesRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenOppositePlanesRule> IfThenOppositePlanesRule;
	struct IfThenOppositePlanesRule { typedef Iterator<t::CIfThenOppositePlanesRuleType> iterator; };
	MemberElement<t::CIfThenPlaneRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenPlaneRule> IfThenPlaneRule;
	struct IfThenPlaneRule { typedef Iterator<t::CIfThenPlaneRuleType> iterator; };
	MemberElement<t::CIfThenPointDefinedCurveRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenPointDefinedCurveRule> IfThenPointDefinedCurveRule;
	struct IfThenPointDefinedCurveRule { typedef Iterator<t::CIfThenPointDefinedCurveRuleType> iterator; };
	MemberElement<t::CIfThenPointDefinedSurfaceRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenPointDefinedSurfaceRule> IfThenPointDefinedSurfaceRule;
	struct IfThenPointDefinedSurfaceRule { typedef Iterator<t::CIfThenPointDefinedSurfaceRuleType> iterator; };
	MemberElement<t::CIfThenPointRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenPointRule> IfThenPointRule;
	struct IfThenPointRule { typedef Iterator<t::CIfThenPointRuleType> iterator; };
	MemberElement<t::CIfThenSphereRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenSphereRule> IfThenSphereRule;
	struct IfThenSphereRule { typedef Iterator<t::CIfThenSphereRuleType> iterator; };
	MemberElement<t::CIfThenSphericalSegmentRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenSphericalSegmentRule> IfThenSphericalSegmentRule;
	struct IfThenSphericalSegmentRule { typedef Iterator<t::CIfThenSphericalSegmentRuleType> iterator; };
	MemberElement<t::CIfThenSurfaceOfRevolutionRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenSurfaceOfRevolutionRule> IfThenSurfaceOfRevolutionRule;
	struct IfThenSurfaceOfRevolutionRule { typedef Iterator<t::CIfThenSurfaceOfRevolutionRuleType> iterator; };
	MemberElement<t::CIfThenSurfaceRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenSurfaceRule> IfThenSurfaceRule;
	struct IfThenSurfaceRule { typedef Iterator<t::CIfThenSurfaceRuleType> iterator; };
	MemberElement<t::CIfThenToroidalSegmentRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenToroidalSegmentRule> IfThenToroidalSegmentRule;
	struct IfThenToroidalSegmentRule { typedef Iterator<t::CIfThenToroidalSegmentRuleType> iterator; };
	MemberElement<t::CIfThenTorusRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_IfThenTorusRule> IfThenTorusRule;
	struct IfThenTorusRule { typedef Iterator<t::CIfThenTorusRuleType> iterator; };
	MemberElement<t::CElseRuleType, _altova_mi_t_altova_CIfThenElseFeatureRulesType_altova_Else2> Else2;
	struct Else2 { typedef Iterator<t::CElseRuleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenElseFeatureRulesType
