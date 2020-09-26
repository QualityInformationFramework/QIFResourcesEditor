#pragma once



namespace qif191
{

namespace xs
{	

class ChexBinary : public TypeBase
{
public:
	QIF191_EXPORT ChexBinary(xercesc::DOMNode* const& init);
	QIF191_EXPORT ChexBinary(ChexBinary const& init);
	void operator=(ChexBinary const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_ChexBinary); }
	void operator= (const std::vector<unsigned char>& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::HexBinaryFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator std::vector<unsigned char>()
	{
		return CastAs<std::vector<unsigned char> >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_ChexBinary
