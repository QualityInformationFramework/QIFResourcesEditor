#pragma once



namespace qif191
{

namespace t
{	

class CBottomEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CBottomEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBottomEnumTypeType(CBottomEnumTypeType const& init);
	void operator=(CBottomEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBottomEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_BLIND = 0, // BLIND
		k_THROUGH = 1, // THROUGH
		k_UNDEFINED = 2, // UNDEFINED
		EnumValueCount
	};

	
	QIF191_EXPORT int GetEnumerationValue();
	QIF191_EXPORT void SetEnumerationValue( const int index);
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBottomEnumTypeType
