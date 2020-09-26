#pragma once



namespace qif191
{

namespace xs
{	

class CNMTOKENType : public TypeBase
{
public:
	QIF191_EXPORT CNMTOKENType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNMTOKENType(CNMTOKENType const& init);
	void operator=(CNMTOKENType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CNMTOKENType); }
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CNMTOKENType
