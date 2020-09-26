#pragma once



namespace qif191
{

namespace t
{	

class CFontType : public TypeBase
{
public:
	QIF191_EXPORT CFontType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFontType(CFontType const& init);
	void operator=(CFontType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFontType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CFontType_altova_Index, 0, 0> Index;	// Index CunsignedInt

	MemberAttribute<bool,_altova_mi_t_altova_CFontType_altova_Bold, 0, 0> Bold;	// Bold Cboolean

	MemberAttribute<bool,_altova_mi_t_altova_CFontType_altova_Italic, 0, 0> Italic;	// Italic Cboolean
	MemberElement<xs::CstringType, _altova_mi_t_altova_CFontType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CNaturalTypeType, _altova_mi_t_altova_CFontType_altova_Size> Size;
	struct Size { typedef Iterator<t::CNaturalTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFontType
