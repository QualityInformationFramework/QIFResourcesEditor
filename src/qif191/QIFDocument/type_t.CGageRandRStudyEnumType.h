#pragma once



namespace qif191
{

namespace t
{	

class CGageRandRStudyEnumType : public TypeBase
{
public:
	QIF191_EXPORT CGageRandRStudyEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGageRandRStudyEnumType(CGageRandRStudyEnumType const& init);
	void operator=(CGageRandRStudyEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CGageRandRStudyEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_RANGE = 0, // RANGE
		k_AVGANDRANGE = 1, // AVGANDRANGE
		k_ANOVA = 2, // ANOVA
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGageRandRStudyEnumType
