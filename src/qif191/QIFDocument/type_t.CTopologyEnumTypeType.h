#pragma once



namespace qif191
{

namespace t
{	

class CTopologyEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CTopologyEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTopologyEnumTypeType(CTopologyEnumTypeType const& init);
	void operator=(CTopologyEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTopologyEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_UNKNOWN = 0, // UNKNOWN
		k_PRESENT = 1, // PRESENT
		k_ABSENT = 2, // ABSENT
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTopologyEnumTypeType
