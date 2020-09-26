#pragma once



namespace qif191
{

namespace t
{	

class CCylindricalSegmentConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CCylindricalSegmentConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricalSegmentConstructionMethodType(CCylindricalSegmentConstructionMethodType const& init);
	void operator=(CCylindricalSegmentConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricalSegmentConstructionMethodType); }
	MemberElement<t::CCylindricalSegmentBestFitType, _altova_mi_t_altova_CCylindricalSegmentConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CCylindricalSegmentBestFitType> iterator; };
	MemberElement<t::CCylindricalSegmentRecompType, _altova_mi_t_altova_CCylindricalSegmentConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CCylindricalSegmentRecompType> iterator; };
	MemberElement<t::CCylindricalSegmentCopyType, _altova_mi_t_altova_CCylindricalSegmentConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CCylindricalSegmentCopyType> iterator; };
	MemberElement<t::CCylindricalSegmentCastType, _altova_mi_t_altova_CCylindricalSegmentConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CCylindricalSegmentCastType> iterator; };
	MemberElement<t::CCylindricalSegmentTransformType, _altova_mi_t_altova_CCylindricalSegmentConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CCylindricalSegmentTransformType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricalSegmentConstructionMethodType
