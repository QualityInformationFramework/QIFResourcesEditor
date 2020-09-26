#pragma once



namespace qif191
{

namespace t
{	

class CTextsType : public TypeBase
{
public:
	QIF191_EXPORT CTextsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTextsType(CTextsType const& init);
	void operator=(CTextsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTextsType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CTextsType_altova_FontIndex, 0, 0> FontIndex;	// FontIndex CunsignedInt

	MemberAttribute<double,_altova_mi_t_altova_CTextsType_altova_LineHeight, 0, 0> LineHeight;	// LineHeight Cdouble

	MemberAttribute<unsigned,_altova_mi_t_altova_CTextsType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CTextType, _altova_mi_t_altova_CTextsType_altova_Text> Text;
	struct Text { typedef Iterator<t::CTextType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTextsType
