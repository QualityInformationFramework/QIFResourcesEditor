#pragma once



namespace qif191
{

namespace t
{	

class CTimeDescriptionEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CTimeDescriptionEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTimeDescriptionEnumTypeType(CTimeDescriptionEnumTypeType const& init);
	void operator=(CTimeDescriptionEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTimeDescriptionEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_INSPECTION_START = 0, // INSPECTION_START
		k_INSPECTION_END = 1, // INSPECTION_END
		k_INTERMEDIATE = 2, // INTERMEDIATE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTimeDescriptionEnumTypeType
