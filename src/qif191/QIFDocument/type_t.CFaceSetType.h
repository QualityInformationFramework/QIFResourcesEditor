#pragma once



namespace qif191
{

namespace t
{	

class CFaceSetType : public TypeBase
{
public:
	QIF191_EXPORT CFaceSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFaceSetType(CFaceSetType const& init);
	void operator=(CFaceSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFaceSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CFaceSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CFaceBaseType, _altova_mi_t_altova_CFaceSetType_altova_FaceBase> FaceBase;
	struct FaceBase { typedef Iterator<t::CFaceBaseType> iterator; };
	MemberElement<t::CFaceType, _altova_mi_t_altova_CFaceSetType_altova_Face> Face;
	struct Face { typedef Iterator<t::CFaceType> iterator; };
	MemberElement<t::CFaceMeshType, _altova_mi_t_altova_CFaceSetType_altova_FaceMesh> FaceMesh;
	struct FaceMesh { typedef Iterator<t::CFaceMeshType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFaceSetType
