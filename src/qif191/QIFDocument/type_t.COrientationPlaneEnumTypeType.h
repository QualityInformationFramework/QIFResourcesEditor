#pragma once



namespace qif191
{

namespace t
{	

class COrientationPlaneEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT COrientationPlaneEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientationPlaneEnumTypeType(COrientationPlaneEnumTypeType const& init);
	void operator=(COrientationPlaneEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COrientationPlaneEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_PARALLEL = 0, // PARALLEL
		k_PERPENDICULAR = 1, // PERPENDICULAR
		k_INCLINED = 2, // INCLINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientationPlaneEnumTypeType
