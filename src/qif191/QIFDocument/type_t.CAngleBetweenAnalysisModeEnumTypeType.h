#pragma once



namespace qif191
{

namespace t
{	

class CAngleBetweenAnalysisModeEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CAngleBetweenAnalysisModeEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleBetweenAnalysisModeEnumTypeType(CAngleBetweenAnalysisModeEnumTypeType const& init);
	void operator=(CAngleBetweenAnalysisModeEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleBetweenAnalysisModeEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_TWODIMENSIONAL = 0, // TWODIMENSIONAL
		k_THREEDIMENSIONAL = 1, // THREEDIMENSIONAL
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleBetweenAnalysisModeEnumTypeType
