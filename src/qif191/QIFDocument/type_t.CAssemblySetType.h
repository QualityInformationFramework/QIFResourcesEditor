#pragma once



namespace qif191
{

namespace t
{	

class CAssemblySetType : public TypeBase
{
public:
	QIF191_EXPORT CAssemblySetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAssemblySetType(CAssemblySetType const& init);
	void operator=(CAssemblySetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAssemblySetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CAssemblySetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CAssemblyType, _altova_mi_t_altova_CAssemblySetType_altova_Assembly> Assembly;
	struct Assembly { typedef Iterator<t::CAssemblyType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAssemblySetType
