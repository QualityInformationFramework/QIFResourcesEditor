#pragma once



namespace qif191
{

namespace t
{	

class CCompoundFeatureGeometryEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CCompoundFeatureGeometryEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompoundFeatureGeometryEnumTypeType(CCompoundFeatureGeometryEnumTypeType const& init);
	void operator=(CCompoundFeatureGeometryEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompoundFeatureGeometryEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_COAXIAL = 0, // COAXIAL
		k_COPLANAR = 1, // COPLANAR
		k_COCENTERED = 2, // COCENTERED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompoundFeatureGeometryEnumTypeType
