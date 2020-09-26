#pragma once



namespace qif191
{

namespace t
{	

class CGageRandRStudyEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CGageRandRStudyEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGageRandRStudyEnumTypeType(CGageRandRStudyEnumTypeType const& init);
	void operator=(CGageRandRStudyEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGageRandRStudyEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_RANGE = 0, // RANGE
		k_AVGANDRANGE = 1, // AVGANDRANGE
		k_ANOVA = 2, // ANOVA
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGageRandRStudyEnumTypeType
