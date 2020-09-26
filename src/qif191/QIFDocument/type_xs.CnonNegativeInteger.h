#pragma once



namespace qif191
{

namespace xs
{	

class CnonNegativeInteger : public TypeBase
{
public:
	QIF191_EXPORT CnonNegativeInteger(xercesc::DOMNode* const& init);
	QIF191_EXPORT CnonNegativeInteger(CnonNegativeInteger const& init);
	void operator=(CnonNegativeInteger const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CnonNegativeInteger); }
	void operator= (const unsigned __int64& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator unsigned __int64()
	{
		return CastAs<unsigned __int64 >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CnonNegativeInteger
