#pragma once



namespace qif191
{

namespace t
{	

class CConeConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CConeConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConeConstructionMethodType(CConeConstructionMethodType const& init);
	void operator=(CConeConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConeConstructionMethodType); }
	MemberElement<t::CConeBestFitType, _altova_mi_t_altova_CConeConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CConeBestFitType> iterator; };
	MemberElement<t::CConeRecompType, _altova_mi_t_altova_CConeConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CConeRecompType> iterator; };
	MemberElement<t::CConeCopyType, _altova_mi_t_altova_CConeConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CConeCopyType> iterator; };
	MemberElement<t::CConeCastType, _altova_mi_t_altova_CConeConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CConeCastType> iterator; };
	MemberElement<t::CConeTransformType, _altova_mi_t_altova_CConeConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CConeTransformType> iterator; };
	MemberElement<t::CConeFromScanType, _altova_mi_t_altova_CConeConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CConeFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConeConstructionMethodType
