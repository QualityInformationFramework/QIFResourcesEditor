#pragma once



namespace qif191
{

namespace t
{	

class CTopologySetType : public TypeBase
{
public:
	QIF191_EXPORT CTopologySetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTopologySetType(CTopologySetType const& init);
	void operator=(CTopologySetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTopologySetType); }
	MemberElement<t::CVertexSetType, _altova_mi_t_altova_CTopologySetType_altova_VertexSet> VertexSet;
	struct VertexSet { typedef Iterator<t::CVertexSetType> iterator; };
	MemberElement<t::CEdgeSetType, _altova_mi_t_altova_CTopologySetType_altova_EdgeSet> EdgeSet;
	struct EdgeSet { typedef Iterator<t::CEdgeSetType> iterator; };
	MemberElement<t::CLoopSetType, _altova_mi_t_altova_CTopologySetType_altova_LoopSet> LoopSet;
	struct LoopSet { typedef Iterator<t::CLoopSetType> iterator; };
	MemberElement<t::CFaceSetType, _altova_mi_t_altova_CTopologySetType_altova_FaceSet> FaceSet;
	struct FaceSet { typedef Iterator<t::CFaceSetType> iterator; };
	MemberElement<t::CShellSetType, _altova_mi_t_altova_CTopologySetType_altova_ShellSet> ShellSet;
	struct ShellSet { typedef Iterator<t::CShellSetType> iterator; };
	MemberElement<t::CBodySetType, _altova_mi_t_altova_CTopologySetType_altova_BodySet> BodySet;
	struct BodySet { typedef Iterator<t::CBodySetType> iterator; };
	MemberElement<t::CPointCloudSetType, _altova_mi_t_altova_CTopologySetType_altova_PointCloudSet> PointCloudSet;
	struct PointCloudSet { typedef Iterator<t::CPointCloudSetType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTopologySetType
