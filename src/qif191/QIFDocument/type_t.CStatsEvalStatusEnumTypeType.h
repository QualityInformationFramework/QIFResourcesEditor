#pragma once



namespace qif191
{

namespace t
{	

class CStatsEvalStatusEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CStatsEvalStatusEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsEvalStatusEnumTypeType(CStatsEvalStatusEnumTypeType const& init);
	void operator=(CStatsEvalStatusEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsEvalStatusEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_PASS = 0, // PASS
		k_FAIL = 1, // FAIL
		k_INFORMATIONAL = 2, // INFORMATIONAL
		k_UNDEFINED = 3, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsEvalStatusEnumTypeType
