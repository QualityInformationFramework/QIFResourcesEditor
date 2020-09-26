#pragma once



namespace qif191
{

namespace t
{	

class CAngularCoordinateDirectionEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CAngularCoordinateDirectionEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularCoordinateDirectionEnumTypeType(CAngularCoordinateDirectionEnumTypeType const& init);
	void operator=(CAngularCoordinateDirectionEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularCoordinateDirectionEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ANGULAR = 0, // ANGULAR
		k_AZIMUTH = 1, // AZIMUTH
		k_POLAR = 2, // POLAR
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularCoordinateDirectionEnumTypeType
