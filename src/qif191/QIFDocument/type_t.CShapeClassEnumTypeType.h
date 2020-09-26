#pragma once



namespace qif191
{

namespace t
{	

class CShapeClassEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CShapeClassEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CShapeClassEnumTypeType(CShapeClassEnumTypeType const& init);
	void operator=(CShapeClassEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CShapeClassEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_GEAR = 0, // GEAR
		k_FREEFORM = 1, // FREEFORM
		k_PRISMATIC = 2, // PRISMATIC
		k_ROTATIONAL = 3, // ROTATIONAL
		k_THINWALLED = 4, // THINWALLED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CShapeClassEnumTypeType
