#pragma once



namespace qif191
{

namespace t
{	

class CConicalSegmentConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CConicalSegmentConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConicalSegmentConstructionMethodType(CConicalSegmentConstructionMethodType const& init);
	void operator=(CConicalSegmentConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConicalSegmentConstructionMethodType); }
	MemberElement<t::CConicalSegmentBestFitType, _altova_mi_t_altova_CConicalSegmentConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CConicalSegmentBestFitType> iterator; };
	MemberElement<t::CConicalSegmentRecompType, _altova_mi_t_altova_CConicalSegmentConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CConicalSegmentRecompType> iterator; };
	MemberElement<t::CConicalSegmentCopyType, _altova_mi_t_altova_CConicalSegmentConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CConicalSegmentCopyType> iterator; };
	MemberElement<t::CConicalSegmentCastType, _altova_mi_t_altova_CConicalSegmentConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CConicalSegmentCastType> iterator; };
	MemberElement<t::CConicalSegmentTransformType, _altova_mi_t_altova_CConicalSegmentConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CConicalSegmentTransformType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConicalSegmentConstructionMethodType
