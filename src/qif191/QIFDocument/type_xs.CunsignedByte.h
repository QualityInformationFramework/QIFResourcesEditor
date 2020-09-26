#pragma once



namespace qif191
{

namespace xs
{	

class CunsignedByte : public TypeBase
{
public:
	QIF191_EXPORT CunsignedByte(xercesc::DOMNode* const& init);
	QIF191_EXPORT CunsignedByte(CunsignedByte const& init);
	void operator=(CunsignedByte const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CunsignedByte); }
	void operator= (const unsigned& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator unsigned()
	{
		return CastAs<unsigned >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CunsignedByte
