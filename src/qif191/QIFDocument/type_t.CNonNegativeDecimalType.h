#pragma once



namespace qif191
{

namespace t
{	

class CNonNegativeDecimalType : public TypeBase
{
public:
	QIF191_EXPORT CNonNegativeDecimalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNonNegativeDecimalType(CNonNegativeDecimalType const& init);
	void operator=(CNonNegativeDecimalType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CNonNegativeDecimalType); }
	void operator= (const double& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::DecimalFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator double()
	{
		return CastAs<double >::Do(GetNode(), 0);
	}
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNonNegativeDecimalType
