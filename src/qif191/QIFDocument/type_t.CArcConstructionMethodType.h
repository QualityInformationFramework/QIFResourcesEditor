#pragma once



namespace qif191
{

namespace t
{	

class CArcConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CArcConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcConstructionMethodType(CArcConstructionMethodType const& init);
	void operator=(CArcConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcConstructionMethodType); }
	MemberElement<t::CArcBestFitType, _altova_mi_t_altova_CArcConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CArcBestFitType> iterator; };
	MemberElement<t::CArcRecompType, _altova_mi_t_altova_CArcConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CArcRecompType> iterator; };
	MemberElement<t::CArcProjectionType, _altova_mi_t_altova_CArcConstructionMethodType_altova_Projection> Projection;
	struct Projection { typedef Iterator<t::CArcProjectionType> iterator; };
	MemberElement<t::CArcCopyType, _altova_mi_t_altova_CArcConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CArcCopyType> iterator; };
	MemberElement<t::CArcCastType, _altova_mi_t_altova_CArcConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CArcCastType> iterator; };
	MemberElement<t::CArcTransformType, _altova_mi_t_altova_CArcConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CArcTransformType> iterator; };
	MemberElement<t::CArcFromScanType, _altova_mi_t_altova_CArcConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CArcFromScanType> iterator; };
	MemberElement<t::CArcExtractType, _altova_mi_t_altova_CArcConstructionMethodType_altova_Extract> Extract;
	struct Extract { typedef Iterator<t::CArcExtractType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcConstructionMethodType
