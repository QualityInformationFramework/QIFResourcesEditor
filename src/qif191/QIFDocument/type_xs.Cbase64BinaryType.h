#pragma once



namespace qif191
{

namespace xs
{	

class Cbase64BinaryType : public TypeBase
{
public:
	QIF191_EXPORT Cbase64BinaryType(xercesc::DOMNode* const& init);
	QIF191_EXPORT Cbase64BinaryType(Cbase64BinaryType const& init);
	void operator=(Cbase64BinaryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_Cbase64BinaryType); }
	QIF191_EXPORT void operator=(const std::vector<unsigned char>& value);
	QIF191_EXPORT operator std::vector<unsigned char>();
	QIF191_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_Cbase64BinaryType
