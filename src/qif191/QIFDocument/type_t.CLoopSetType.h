#pragma once



namespace qif191
{

namespace t
{	

class CLoopSetType : public TypeBase
{
public:
	QIF191_EXPORT CLoopSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLoopSetType(CLoopSetType const& init);
	void operator=(CLoopSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLoopSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CLoopSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CLoopBaseType, _altova_mi_t_altova_CLoopSetType_altova_LoopBase> LoopBase;
	struct LoopBase { typedef Iterator<t::CLoopBaseType> iterator; };
	MemberElement<t::CLoopType, _altova_mi_t_altova_CLoopSetType_altova_Loop> Loop;
	struct Loop { typedef Iterator<t::CLoopType> iterator; };
	MemberElement<t::CLoopMeshType, _altova_mi_t_altova_CLoopSetType_altova_LoopMesh> LoopMesh;
	struct LoopMesh { typedef Iterator<t::CLoopMeshType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLoopSetType
