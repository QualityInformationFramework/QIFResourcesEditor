#pragma once



namespace qif191
{

namespace t
{	

class CFontsType : public TypeBase
{
public:
	QIF191_EXPORT CFontsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFontsType(CFontsType const& init);
	void operator=(CFontsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFontsType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CFontsType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CFontType, _altova_mi_t_altova_CFontsType_altova_Font> Font;
	struct Font { typedef Iterator<t::CFontType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFontsType
