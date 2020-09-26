#pragma once



namespace qif191
{

namespace xs
{	

class Cdouble : public TypeBase
{
public:
	QIF191_EXPORT Cdouble(xercesc::DOMNode* const& init);
	QIF191_EXPORT Cdouble(Cdouble const& init);
	void operator=(Cdouble const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_Cdouble); }
	void operator= (const double& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::DoubleFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator double()
	{
		return CastAs<double >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_Cdouble
