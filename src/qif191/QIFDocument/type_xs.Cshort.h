#pragma once



namespace qif191
{

namespace xs
{	

class Cshort : public TypeBase
{
public:
	QIF191_EXPORT Cshort(xercesc::DOMNode* const& init);
	QIF191_EXPORT Cshort(Cshort const& init);
	void operator=(Cshort const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_Cshort); }
	void operator= (const int& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator int()
	{
		return CastAs<int >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_Cshort
