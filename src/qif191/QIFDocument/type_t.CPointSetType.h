#pragma once



namespace qif191
{

namespace t
{	

class CPointSetType : public TypeBase
{
public:
	QIF191_EXPORT CPointSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointSetType(CPointSetType const& init);
	void operator=(CPointSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CPointSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CPointEntityType, _altova_mi_t_altova_CPointSetType_altova_Point> Point;
	struct Point { typedef Iterator<t::CPointEntityType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointSetType
