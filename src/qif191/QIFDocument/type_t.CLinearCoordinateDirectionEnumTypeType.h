#pragma once



namespace qif191
{

namespace t
{	

class CLinearCoordinateDirectionEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CLinearCoordinateDirectionEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearCoordinateDirectionEnumTypeType(CLinearCoordinateDirectionEnumTypeType const& init);
	void operator=(CLinearCoordinateDirectionEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearCoordinateDirectionEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_XAXIS = 0, // XAXIS
		k_YAXIS = 1, // YAXIS
		k_ZAXIS = 2, // ZAXIS
		k_RADIAL = 3, // RADIAL
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearCoordinateDirectionEnumTypeType
