#pragma once



namespace qif191
{

namespace t
{	

class CToroidalSegmentConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CToroidalSegmentConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToroidalSegmentConstructionMethodType(CToroidalSegmentConstructionMethodType const& init);
	void operator=(CToroidalSegmentConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToroidalSegmentConstructionMethodType); }
	MemberElement<t::CToroidalSegmentBestFitType, _altova_mi_t_altova_CToroidalSegmentConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CToroidalSegmentBestFitType> iterator; };
	MemberElement<t::CToroidalSegmentRecompType, _altova_mi_t_altova_CToroidalSegmentConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CToroidalSegmentRecompType> iterator; };
	MemberElement<t::CToroidalSegmentCopyType, _altova_mi_t_altova_CToroidalSegmentConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CToroidalSegmentCopyType> iterator; };
	MemberElement<t::CToroidalSegmentCastType, _altova_mi_t_altova_CToroidalSegmentConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CToroidalSegmentCastType> iterator; };
	MemberElement<t::CToroidalSegmentTransformType, _altova_mi_t_altova_CToroidalSegmentConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CToroidalSegmentTransformType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToroidalSegmentConstructionMethodType
