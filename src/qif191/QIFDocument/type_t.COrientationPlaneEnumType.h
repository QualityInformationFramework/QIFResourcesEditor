#pragma once



namespace qif191
{

namespace t
{	

class COrientationPlaneEnumType : public TypeBase
{
public:
	QIF191_EXPORT COrientationPlaneEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientationPlaneEnumType(COrientationPlaneEnumType const& init);
	void operator=(COrientationPlaneEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_COrientationPlaneEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_PARALLEL = 0, // PARALLEL
		k_PERPENDICULAR = 1, // PERPENDICULAR
		k_INCLINED = 2, // INCLINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientationPlaneEnumType
