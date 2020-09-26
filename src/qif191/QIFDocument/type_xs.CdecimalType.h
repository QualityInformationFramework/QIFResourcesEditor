#pragma once



namespace qif191
{

namespace xs
{	

class CdecimalType : public TypeBase
{
public:
	QIF191_EXPORT CdecimalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CdecimalType(CdecimalType const& init);
	void operator=(CdecimalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CdecimalType); }
	QIF191_EXPORT void operator=(const double& value);
	QIF191_EXPORT operator double();
	QIF191_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CdecimalType
