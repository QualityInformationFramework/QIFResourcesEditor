#pragma once



namespace qif191
{

namespace t
{	

class CSphereConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CSphereConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSphereConstructionMethodType(CSphereConstructionMethodType const& init);
	void operator=(CSphereConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSphereConstructionMethodType); }
	MemberElement<t::CSphereBestFitType, _altova_mi_t_altova_CSphereConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CSphereBestFitType> iterator; };
	MemberElement<t::CSphereRecompType, _altova_mi_t_altova_CSphereConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CSphereRecompType> iterator; };
	MemberElement<t::CSphereCopyType, _altova_mi_t_altova_CSphereConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CSphereCopyType> iterator; };
	MemberElement<t::CSphereCastType, _altova_mi_t_altova_CSphereConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CSphereCastType> iterator; };
	MemberElement<t::CSphereTransformType, _altova_mi_t_altova_CSphereConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CSphereTransformType> iterator; };
	MemberElement<t::CSphereFromScanType, _altova_mi_t_altova_CSphereConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CSphereFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSphereConstructionMethodType
