#pragma once



namespace qif191
{

namespace t
{	

class CSphericalSegmentConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CSphericalSegmentConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSphericalSegmentConstructionMethodType(CSphericalSegmentConstructionMethodType const& init);
	void operator=(CSphericalSegmentConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSphericalSegmentConstructionMethodType); }
	MemberElement<t::CSphericalSegmentBestFitType, _altova_mi_t_altova_CSphericalSegmentConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CSphericalSegmentBestFitType> iterator; };
	MemberElement<t::CSphericalSegmentRecompType, _altova_mi_t_altova_CSphericalSegmentConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CSphericalSegmentRecompType> iterator; };
	MemberElement<t::CSphericalSegmentCopyType, _altova_mi_t_altova_CSphericalSegmentConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CSphericalSegmentCopyType> iterator; };
	MemberElement<t::CSphericalSegmentCastType, _altova_mi_t_altova_CSphericalSegmentConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CSphericalSegmentCastType> iterator; };
	MemberElement<t::CSphericalSegmentTransformType, _altova_mi_t_altova_CSphericalSegmentConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CSphericalSegmentTransformType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSphericalSegmentConstructionMethodType
