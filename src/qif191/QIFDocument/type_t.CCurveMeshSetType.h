#pragma once



namespace qif191
{

namespace t
{	

class CCurveMeshSetType : public TypeBase
{
public:
	QIF191_EXPORT CCurveMeshSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurveMeshSetType(CCurveMeshSetType const& init);
	void operator=(CCurveMeshSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurveMeshSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCurveMeshSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CPathTriangulationType, _altova_mi_t_altova_CCurveMeshSetType_altova_PathTriangulation> PathTriangulation;
	struct PathTriangulation { typedef Iterator<t::CPathTriangulationType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurveMeshSetType
