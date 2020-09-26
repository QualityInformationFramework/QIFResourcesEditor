#pragma once



namespace qif191
{

namespace t
{	

class CExclusionEnumType : public TypeBase
{
public:
	QIF191_EXPORT CExclusionEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExclusionEnumType(CExclusionEnumType const& init);
	void operator=(CExclusionEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CExclusionEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_FLIER = 0, // FLIER
		k_EQUIPERROR = 1, // EQUIPERROR
		k_REWORK = 2, // REWORK
		k_KNOWNCAUSE = 3, // KNOWNCAUSE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExclusionEnumType
