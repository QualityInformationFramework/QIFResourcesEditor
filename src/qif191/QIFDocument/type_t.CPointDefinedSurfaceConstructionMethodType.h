#pragma once



namespace qif191
{

namespace t
{	

class CPointDefinedSurfaceConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CPointDefinedSurfaceConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedSurfaceConstructionMethodType(CPointDefinedSurfaceConstructionMethodType const& init);
	void operator=(CPointDefinedSurfaceConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedSurfaceConstructionMethodType); }
	MemberElement<t::CPointDefinedSurfaceBestFitType, _altova_mi_t_altova_CPointDefinedSurfaceConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CPointDefinedSurfaceBestFitType> iterator; };
	MemberElement<t::CPointDefinedSurfaceRecompType, _altova_mi_t_altova_CPointDefinedSurfaceConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CPointDefinedSurfaceRecompType> iterator; };
	MemberElement<t::CPointDefinedSurfaceCopyType, _altova_mi_t_altova_CPointDefinedSurfaceConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CPointDefinedSurfaceCopyType> iterator; };
	MemberElement<t::CPointDefinedSurfaceTransformType, _altova_mi_t_altova_CPointDefinedSurfaceConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CPointDefinedSurfaceTransformType> iterator; };
	MemberElement<t::CPointDefinedSurfaceExtractType, _altova_mi_t_altova_CPointDefinedSurfaceConstructionMethodType_altova_Extract> Extract;
	struct Extract { typedef Iterator<t::CPointDefinedSurfaceExtractType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedSurfaceConstructionMethodType
