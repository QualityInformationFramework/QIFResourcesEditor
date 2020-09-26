#pragma once



namespace qif191
{

namespace t
{	

class CListDouble9TypeType : public TypeBase
{
public:
	QIF191_EXPORT CListDouble9TypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CListDouble9TypeType(CListDouble9TypeType const& init);
	void operator=(CListDouble9TypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CListDouble9TypeType); }
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CListDouble9TypeType
