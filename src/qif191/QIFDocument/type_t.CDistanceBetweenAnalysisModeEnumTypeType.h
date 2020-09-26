#pragma once



namespace qif191
{

namespace t
{	

class CDistanceBetweenAnalysisModeEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CDistanceBetweenAnalysisModeEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDistanceBetweenAnalysisModeEnumTypeType(CDistanceBetweenAnalysisModeEnumTypeType const& init);
	void operator=(CDistanceBetweenAnalysisModeEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDistanceBetweenAnalysisModeEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ONEDIMENSIONAL = 0, // ONEDIMENSIONAL
		k_TWODIMENSIONAL = 1, // TWODIMENSIONAL
		k_THREEDIMENSIONAL = 2, // THREEDIMENSIONAL
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDistanceBetweenAnalysisModeEnumTypeType
