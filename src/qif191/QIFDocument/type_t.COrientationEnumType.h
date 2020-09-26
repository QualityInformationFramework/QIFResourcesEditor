#pragma once



namespace qif191
{

namespace t
{	

class COrientationEnumType : public TypeBase
{
public:
	QIF191_EXPORT COrientationEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientationEnumType(COrientationEnumType const& init);
	void operator=(COrientationEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_COrientationEnumType); }

	enum EnumValues {
		Invalid = -1,
		k__1 = 0, // -1
		k_1 = 1, // 1
		EnumValueCount
	};
	void operator= (const __int64& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator __int64()
	{
		return CastAs<__int64 >::Do(GetNode(), 0);
	}
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientationEnumType
