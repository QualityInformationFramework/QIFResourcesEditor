#pragma once



namespace qif191
{

namespace t
{	

class CISODegreeOfFreedomEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CISODegreeOfFreedomEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CISODegreeOfFreedomEnumTypeType(CISODegreeOfFreedomEnumTypeType const& init);
	void operator=(CISODegreeOfFreedomEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CISODegreeOfFreedomEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_Rx = 0, // Rx
		k_Ry = 1, // Ry
		k_Rz = 2, // Rz
		k_Tx = 3, // Tx
		k_Ty = 4, // Ty
		k_Tz = 5, // Tz
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CISODegreeOfFreedomEnumTypeType
