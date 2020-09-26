#pragma once



namespace qif191
{

namespace t
{	

class CCylinderConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CCylinderConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylinderConstructionMethodType(CCylinderConstructionMethodType const& init);
	void operator=(CCylinderConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylinderConstructionMethodType); }
	MemberElement<t::CCylinderBestFitType, _altova_mi_t_altova_CCylinderConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CCylinderBestFitType> iterator; };
	MemberElement<t::CCylinderRecompType, _altova_mi_t_altova_CCylinderConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CCylinderRecompType> iterator; };
	MemberElement<t::CCylinderCopyType, _altova_mi_t_altova_CCylinderConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CCylinderCopyType> iterator; };
	MemberElement<t::CCylinderCastType, _altova_mi_t_altova_CCylinderConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CCylinderCastType> iterator; };
	MemberElement<t::CCylinderTransformType, _altova_mi_t_altova_CCylinderConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CCylinderTransformType> iterator; };
	MemberElement<t::CCylinderFromScanType, _altova_mi_t_altova_CCylinderConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CCylinderFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylinderConstructionMethodType
