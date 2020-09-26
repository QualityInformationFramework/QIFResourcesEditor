#pragma once



namespace qif191
{

namespace xs
{	

class CstringType : public TypeBase
{
public:
	QIF191_EXPORT CstringType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CstringType(CstringType const& init);
	void operator=(CstringType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CstringType); }
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CstringType
