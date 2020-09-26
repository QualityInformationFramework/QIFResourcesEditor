#pragma once



namespace qif191
{

namespace t
{	

class CShellSetType : public TypeBase
{
public:
	QIF191_EXPORT CShellSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CShellSetType(CShellSetType const& init);
	void operator=(CShellSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CShellSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CShellSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CShellType, _altova_mi_t_altova_CShellSetType_altova_Shell> Shell;
	struct Shell { typedef Iterator<t::CShellType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CShellSetType
