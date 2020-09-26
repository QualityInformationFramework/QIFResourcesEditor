#pragma once



namespace qif191
{

namespace t
{	

class CCMMDirectionEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CCMMDirectionEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMDirectionEnumTypeType(CCMMDirectionEnumTypeType const& init);
	void operator=(CCMMDirectionEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCMMDirectionEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_RIGHT = 0, // RIGHT
		k_LEFT = 1, // LEFT
		k_FRONT = 2, // FRONT
		k_BACK = 3, // BACK
		k_UP = 4, // UP
		k_DOWN = 5, // DOWN
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMDirectionEnumTypeType
