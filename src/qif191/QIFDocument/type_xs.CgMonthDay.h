#pragma once



namespace qif191
{

namespace xs
{	

class CgMonthDay : public TypeBase
{
public:
	QIF191_EXPORT CgMonthDay(xercesc::DOMNode* const& init);
	QIF191_EXPORT CgMonthDay(CgMonthDay const& init);
	void operator=(CgMonthDay const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CgMonthDay); }
	void operator= (const altova::DateTime& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::GMonthDayFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator altova::DateTime()
	{
		return CastAs<altova::DateTime >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CgMonthDay
