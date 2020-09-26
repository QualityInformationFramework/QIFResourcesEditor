#pragma once



namespace qif191
{

namespace t
{	

class CUserDataXMLType : public TypeBase
{
public:
	QIF191_EXPORT CUserDataXMLType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDataXMLType(CUserDataXMLType const& init);
	void operator=(CUserDataXMLType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDataXMLType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDataXMLType
