#pragma once



namespace qif191
{

namespace t
{	

class CBodySetType : public TypeBase
{
public:
	QIF191_EXPORT CBodySetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBodySetType(CBodySetType const& init);
	void operator=(CBodySetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBodySetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CBodySetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CBodyType, _altova_mi_t_altova_CBodySetType_altova_Body> Body;
	struct Body { typedef Iterator<t::CBodyType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBodySetType
