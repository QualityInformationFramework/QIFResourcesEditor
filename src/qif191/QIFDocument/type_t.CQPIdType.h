#pragma once



namespace qif191
{

namespace t
{	

class CQPIdType : public TypeBase
{
public:
	QIF191_EXPORT CQPIdType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQPIdType(CQPIdType const& init);
	void operator=(CQPIdType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CQPIdType); }
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQPIdType
