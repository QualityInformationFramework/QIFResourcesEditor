#pragma once



namespace qif191
{

namespace t
{	

class COppositePlanesConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT COppositePlanesConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositePlanesConstructionMethodType(COppositePlanesConstructionMethodType const& init);
	void operator=(COppositePlanesConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositePlanesConstructionMethodType); }
	MemberElement<t::COppositePlanesBestFitType, _altova_mi_t_altova_COppositePlanesConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::COppositePlanesBestFitType> iterator; };
	MemberElement<t::COppositePlanesRecompType, _altova_mi_t_altova_COppositePlanesConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::COppositePlanesRecompType> iterator; };
	MemberElement<t::COppositePlanesCopyType, _altova_mi_t_altova_COppositePlanesConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::COppositePlanesCopyType> iterator; };
	MemberElement<t::COppositePlanesCastType, _altova_mi_t_altova_COppositePlanesConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::COppositePlanesCastType> iterator; };
	MemberElement<t::COppositePlanesTransformType, _altova_mi_t_altova_COppositePlanesConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::COppositePlanesTransformType> iterator; };
	MemberElement<t::COppositePlanesFromScanType, _altova_mi_t_altova_COppositePlanesConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::COppositePlanesFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositePlanesConstructionMethodType
