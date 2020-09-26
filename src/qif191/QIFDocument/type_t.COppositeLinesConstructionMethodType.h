#pragma once



namespace qif191
{

namespace t
{	

class COppositeLinesConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT COppositeLinesConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositeLinesConstructionMethodType(COppositeLinesConstructionMethodType const& init);
	void operator=(COppositeLinesConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositeLinesConstructionMethodType); }
	MemberElement<t::COppositeLinesBestFitType, _altova_mi_t_altova_COppositeLinesConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::COppositeLinesBestFitType> iterator; };
	MemberElement<t::COppositeLinesRecompType, _altova_mi_t_altova_COppositeLinesConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::COppositeLinesRecompType> iterator; };
	MemberElement<t::COppositeLinesProjectionType, _altova_mi_t_altova_COppositeLinesConstructionMethodType_altova_Projection> Projection;
	struct Projection { typedef Iterator<t::COppositeLinesProjectionType> iterator; };
	MemberElement<t::COppositeLinesCopyType, _altova_mi_t_altova_COppositeLinesConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::COppositeLinesCopyType> iterator; };
	MemberElement<t::COppositeLinesCastType, _altova_mi_t_altova_COppositeLinesConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::COppositeLinesCastType> iterator; };
	MemberElement<t::COppositeLinesTransformType, _altova_mi_t_altova_COppositeLinesConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::COppositeLinesTransformType> iterator; };
	MemberElement<t::COppositeLinesFromScanType, _altova_mi_t_altova_COppositeLinesConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::COppositeLinesFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositeLinesConstructionMethodType
