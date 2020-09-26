#pragma once



namespace qif191
{

namespace t
{	

class CDegreeOfFreedomEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CDegreeOfFreedomEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDegreeOfFreedomEnumTypeType(CDegreeOfFreedomEnumTypeType const& init);
	void operator=(CDegreeOfFreedomEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDegreeOfFreedomEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_U = 0, // U
		k_V = 1, // V
		k_W = 2, // W
		k_X = 3, // X
		k_Y = 4, // Y
		k_Z = 5, // Z
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDegreeOfFreedomEnumTypeType
