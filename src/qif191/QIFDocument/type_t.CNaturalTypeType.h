#pragma once



namespace qif191
{

namespace t
{	

class CNaturalTypeType : public TypeBase
{
public:
	QIF191_EXPORT CNaturalTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNaturalTypeType(CNaturalTypeType const& init);
	void operator=(CNaturalTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNaturalTypeType); }
	QIF191_EXPORT void operator=(const unsigned& value);
	QIF191_EXPORT operator unsigned();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNaturalTypeType
