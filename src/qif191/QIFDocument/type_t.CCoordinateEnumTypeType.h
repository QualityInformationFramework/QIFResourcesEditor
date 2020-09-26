#pragma once



namespace qif191
{

namespace t
{	

class CCoordinateEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CCoordinateEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateEnumTypeType(CCoordinateEnumTypeType const& init);
	void operator=(CCoordinateEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_CARTESIAN_2D = 0, // CARTESIAN_2D
		k_POLAR_2D = 1, // POLAR_2D
		k_CARTESIAN_3D = 2, // CARTESIAN_3D
		k_CYLINDRICAL_3D = 3, // CYLINDRICAL_3D
		k_SPHERICAL_3D = 4, // SPHERICAL_3D
		k_UNDEFINED = 5, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateEnumTypeType
