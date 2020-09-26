#pragma once



namespace qif191
{

namespace t
{	

class CCoordinateEnumType : public TypeBase
{
public:
	QIF191_EXPORT CCoordinateEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateEnumType(CCoordinateEnumType const& init);
	void operator=(CCoordinateEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CCoordinateEnumType); }

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
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateEnumType
