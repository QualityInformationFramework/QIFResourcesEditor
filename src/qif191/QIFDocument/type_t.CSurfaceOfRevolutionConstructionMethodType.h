#pragma once



namespace qif191
{

namespace t
{	

class CSurfaceOfRevolutionConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CSurfaceOfRevolutionConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceOfRevolutionConstructionMethodType(CSurfaceOfRevolutionConstructionMethodType const& init);
	void operator=(CSurfaceOfRevolutionConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceOfRevolutionConstructionMethodType); }
	MemberElement<t::CSurfaceOfRevolutionBestFitType, _altova_mi_t_altova_CSurfaceOfRevolutionConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CSurfaceOfRevolutionBestFitType> iterator; };
	MemberElement<t::CSurfaceOfRevolutionRecompType, _altova_mi_t_altova_CSurfaceOfRevolutionConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CSurfaceOfRevolutionRecompType> iterator; };
	MemberElement<t::CSurfaceOfRevolutionCopyType, _altova_mi_t_altova_CSurfaceOfRevolutionConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CSurfaceOfRevolutionCopyType> iterator; };
	MemberElement<t::CSurfaceOfRevolutionCastType, _altova_mi_t_altova_CSurfaceOfRevolutionConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CSurfaceOfRevolutionCastType> iterator; };
	MemberElement<t::CSurfaceOfRevolutionTransformType, _altova_mi_t_altova_CSurfaceOfRevolutionConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CSurfaceOfRevolutionTransformType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceOfRevolutionConstructionMethodType
