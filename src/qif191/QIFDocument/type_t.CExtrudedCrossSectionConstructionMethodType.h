#pragma once



namespace qif191
{

namespace t
{	

class CExtrudedCrossSectionConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CExtrudedCrossSectionConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrudedCrossSectionConstructionMethodType(CExtrudedCrossSectionConstructionMethodType const& init);
	void operator=(CExtrudedCrossSectionConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrudedCrossSectionConstructionMethodType); }
	MemberElement<t::CExtrudedCrossSectionBestFitType, _altova_mi_t_altova_CExtrudedCrossSectionConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CExtrudedCrossSectionBestFitType> iterator; };
	MemberElement<t::CExtrudedCrossSectionRecompType, _altova_mi_t_altova_CExtrudedCrossSectionConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CExtrudedCrossSectionRecompType> iterator; };
	MemberElement<t::CExtrudedCrossSectionCopyType, _altova_mi_t_altova_CExtrudedCrossSectionConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CExtrudedCrossSectionCopyType> iterator; };
	MemberElement<t::CExtrudedCrossSectionCastType, _altova_mi_t_altova_CExtrudedCrossSectionConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CExtrudedCrossSectionCastType> iterator; };
	MemberElement<t::CExtrudedCrossSectionTransformType, _altova_mi_t_altova_CExtrudedCrossSectionConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CExtrudedCrossSectionTransformType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrudedCrossSectionConstructionMethodType
