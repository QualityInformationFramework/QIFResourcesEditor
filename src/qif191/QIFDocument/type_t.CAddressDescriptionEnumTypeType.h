#pragma once



namespace qif191
{

namespace t
{	

class CAddressDescriptionEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CAddressDescriptionEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAddressDescriptionEnumTypeType(CAddressDescriptionEnumTypeType const& init);
	void operator=(CAddressDescriptionEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAddressDescriptionEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_DELIVERY = 0, // DELIVERY
		k_POSTAL = 1, // POSTAL
		k_VISITOR = 2, // VISITOR
		k_NOTDEFINED = 3, // NOTDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAddressDescriptionEnumTypeType
