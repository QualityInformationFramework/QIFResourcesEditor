#pragma once



namespace qif191
{

namespace t
{	

class CPartSetType : public TypeBase
{
public:
	QIF191_EXPORT CPartSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPartSetType(CPartSetType const& init);
	void operator=(CPartSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPartSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CPartSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CPartType, _altova_mi_t_altova_CPartSetType_altova_Part> Part;
	struct Part { typedef Iterator<t::CPartType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPartSetType
