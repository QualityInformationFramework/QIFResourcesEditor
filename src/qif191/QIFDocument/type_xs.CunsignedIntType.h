#pragma once



namespace qif191
{

namespace xs
{	

class CunsignedIntType : public TypeBase
{
public:
	QIF191_EXPORT CunsignedIntType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CunsignedIntType(CunsignedIntType const& init);
	void operator=(CunsignedIntType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CunsignedIntType); }
	QIF191_EXPORT void operator=(const unsigned& value);
	QIF191_EXPORT operator unsigned();
	QIF191_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CunsignedIntType
