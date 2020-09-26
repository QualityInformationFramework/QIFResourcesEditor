#pragma once



namespace qif191
{

namespace t
{	

class CExclusionEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CExclusionEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExclusionEnumTypeType(CExclusionEnumTypeType const& init);
	void operator=(CExclusionEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExclusionEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_FLIER = 0, // FLIER
		k_EQUIPERROR = 1, // EQUIPERROR
		k_REWORK = 2, // REWORK
		k_KNOWNCAUSE = 3, // KNOWNCAUSE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExclusionEnumTypeType
