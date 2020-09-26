#pragma once



namespace qif191
{

namespace t
{	

class CInternalExternalEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CInternalExternalEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInternalExternalEnumTypeType(CInternalExternalEnumTypeType const& init);
	void operator=(CInternalExternalEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CInternalExternalEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_INTERNAL = 0, // INTERNAL
		k_EXTERNAL = 1, // EXTERNAL
		k_NOT_APPLICABLE = 2, // NOT_APPLICABLE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInternalExternalEnumTypeType
