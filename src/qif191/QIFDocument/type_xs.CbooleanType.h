#pragma once



namespace qif191
{

namespace xs
{	

class CbooleanType : public TypeBase
{
public:
	QIF191_EXPORT CbooleanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CbooleanType(CbooleanType const& init);
	void operator=(CbooleanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CbooleanType); }
	QIF191_EXPORT void operator=(const bool& value);
	QIF191_EXPORT operator bool();
	QIF191_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CbooleanType
