#pragma once



namespace qif191
{

namespace t
{	

class CThreadedFeatureConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CThreadedFeatureConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadedFeatureConstructionMethodType(CThreadedFeatureConstructionMethodType const& init);
	void operator=(CThreadedFeatureConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadedFeatureConstructionMethodType); }
	MemberElement<t::CThreadedFeatureBestFitType, _altova_mi_t_altova_CThreadedFeatureConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CThreadedFeatureBestFitType> iterator; };
	MemberElement<t::CThreadedFeatureRecompType, _altova_mi_t_altova_CThreadedFeatureConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CThreadedFeatureRecompType> iterator; };
	MemberElement<t::CThreadedFeatureCopyType, _altova_mi_t_altova_CThreadedFeatureConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CThreadedFeatureCopyType> iterator; };
	MemberElement<t::CThreadedFeatureCastType, _altova_mi_t_altova_CThreadedFeatureConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CThreadedFeatureCastType> iterator; };
	MemberElement<t::CThreadedFeatureTransformType, _altova_mi_t_altova_CThreadedFeatureConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CThreadedFeatureTransformType> iterator; };
	MemberElement<t::CThreadedFeatureFromCylinderType, _altova_mi_t_altova_CThreadedFeatureConstructionMethodType_altova_FromCylinder> FromCylinder;
	struct FromCylinder { typedef Iterator<t::CThreadedFeatureFromCylinderType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadedFeatureConstructionMethodType
