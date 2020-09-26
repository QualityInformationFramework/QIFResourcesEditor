#pragma once



namespace qif191
{

namespace xs
{	

class CnonNegativeIntegerType : public TypeBase
{
public:
	QIF191_EXPORT CnonNegativeIntegerType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CnonNegativeIntegerType(CnonNegativeIntegerType const& init);
	void operator=(CnonNegativeIntegerType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CnonNegativeIntegerType); }
	QIF191_EXPORT void operator=(const unsigned __int64& value);
	QIF191_EXPORT operator unsigned __int64();
	QIF191_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CnonNegativeIntegerType
