#pragma once



namespace qif191
{

namespace t
{	

class CElongatedCylinderConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CElongatedCylinderConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElongatedCylinderConstructionMethodType(CElongatedCylinderConstructionMethodType const& init);
	void operator=(CElongatedCylinderConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElongatedCylinderConstructionMethodType); }
	MemberElement<t::CElongatedCylinderBestFitType, _altova_mi_t_altova_CElongatedCylinderConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CElongatedCylinderBestFitType> iterator; };
	MemberElement<t::CElongatedCylinderRecompType, _altova_mi_t_altova_CElongatedCylinderConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CElongatedCylinderRecompType> iterator; };
	MemberElement<t::CElongatedCylinderCopyType, _altova_mi_t_altova_CElongatedCylinderConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CElongatedCylinderCopyType> iterator; };
	MemberElement<t::CElongatedCylinderCastType, _altova_mi_t_altova_CElongatedCylinderConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CElongatedCylinderCastType> iterator; };
	MemberElement<t::CElongatedCylinderTransformType, _altova_mi_t_altova_CElongatedCylinderConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElongatedCylinderTransformType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElongatedCylinderConstructionMethodType
