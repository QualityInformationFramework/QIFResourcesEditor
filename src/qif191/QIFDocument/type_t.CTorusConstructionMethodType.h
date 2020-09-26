#pragma once



namespace qif191
{

namespace t
{	

class CTorusConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CTorusConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorusConstructionMethodType(CTorusConstructionMethodType const& init);
	void operator=(CTorusConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorusConstructionMethodType); }
	MemberElement<t::CTorusBestFitType, _altova_mi_t_altova_CTorusConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CTorusBestFitType> iterator; };
	MemberElement<t::CTorusRecompType, _altova_mi_t_altova_CTorusConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CTorusRecompType> iterator; };
	MemberElement<t::CTorusCopyType, _altova_mi_t_altova_CTorusConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CTorusCopyType> iterator; };
	MemberElement<t::CTorusCastType, _altova_mi_t_altova_CTorusConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CTorusCastType> iterator; };
	MemberElement<t::CTorusTransformType, _altova_mi_t_altova_CTorusConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CTorusTransformType> iterator; };
	MemberElement<t::CTorusFromScanType, _altova_mi_t_altova_CTorusConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CTorusFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorusConstructionMethodType
