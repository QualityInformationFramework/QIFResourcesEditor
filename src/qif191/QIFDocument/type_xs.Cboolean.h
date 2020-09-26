#pragma once



namespace qif191
{

namespace xs
{	

class Cboolean : public TypeBase
{
public:
	QIF191_EXPORT Cboolean(xercesc::DOMNode* const& init);
	QIF191_EXPORT Cboolean(Cboolean const& init);
	void operator=(Cboolean const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_Cboolean); }
	void operator= (const bool& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator bool()
	{
		return CastAs<bool >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_Cboolean
