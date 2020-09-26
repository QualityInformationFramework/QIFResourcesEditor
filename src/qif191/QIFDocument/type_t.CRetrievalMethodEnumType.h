#pragma once



namespace qif191
{

namespace t
{	

class CRetrievalMethodEnumType : public TypeBase
{
public:
	QIF191_EXPORT CRetrievalMethodEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRetrievalMethodEnumType(CRetrievalMethodEnumType const& init);
	void operator=(CRetrievalMethodEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CRetrievalMethodEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_AVERAGE = 0, // AVERAGE
		k_MAXEXTREME = 1, // MAXEXTREME
		k_MINEXTREME = 2, // MINEXTREME
		k_CLOSEST1D = 3, // CLOSEST1D
		k_CLOSEST2D = 4, // CLOSEST2D
		k_CLOSEST3D = 5, // CLOSEST3D
		EnumValueCount
	};
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRetrievalMethodEnumType
