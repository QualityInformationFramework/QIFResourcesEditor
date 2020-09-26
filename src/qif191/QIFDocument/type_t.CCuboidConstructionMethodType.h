#pragma once



namespace qif191
{

namespace t
{	

class CCuboidConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CCuboidConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCuboidConstructionMethodType(CCuboidConstructionMethodType const& init);
	void operator=(CCuboidConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCuboidConstructionMethodType); }
	MemberElement<t::CCuboidBestFitType, _altova_mi_t_altova_CCuboidConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CCuboidBestFitType> iterator; };
	MemberElement<t::CCuboidRecompType, _altova_mi_t_altova_CCuboidConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CCuboidRecompType> iterator; };
	MemberElement<t::CCuboidCopyType, _altova_mi_t_altova_CCuboidConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CCuboidCopyType> iterator; };
	MemberElement<t::CCuboidCastType, _altova_mi_t_altova_CCuboidConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CCuboidCastType> iterator; };
	MemberElement<t::CCuboidTransformType, _altova_mi_t_altova_CCuboidConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CCuboidTransformType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCuboidConstructionMethodType
