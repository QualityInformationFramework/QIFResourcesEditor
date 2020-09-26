#pragma once



namespace qif191
{

namespace t
{	

class CQIFIdType : public TypeBase
{
public:
	QIF191_EXPORT CQIFIdType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQIFIdType(CQIFIdType const& init);
	void operator=(CQIFIdType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CQIFIdType); }
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



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQIFIdType
