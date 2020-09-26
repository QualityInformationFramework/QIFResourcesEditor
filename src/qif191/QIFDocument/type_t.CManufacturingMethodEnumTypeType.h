#pragma once



namespace qif191
{

namespace t
{	

class CManufacturingMethodEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CManufacturingMethodEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CManufacturingMethodEnumTypeType(CManufacturingMethodEnumTypeType const& init);
	void operator=(CManufacturingMethodEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CManufacturingMethodEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ADDITIVE = 0, // ADDITIVE
		k_CASTING = 1, // CASTING
		k_COMPOSITE = 2, // COMPOSITE
		k_FABRICATION = 3, // FABRICATION
		k_FORMING = 4, // FORMING
		k_JOINING = 5, // JOINING
		k_MACHINING = 6, // MACHINING
		k_MOLDING = 7, // MOLDING
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CManufacturingMethodEnumTypeType
