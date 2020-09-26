#pragma once



namespace qif191
{

namespace t
{	

class CRetrievalMethodEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CRetrievalMethodEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRetrievalMethodEnumTypeType(CRetrievalMethodEnumTypeType const& init);
	void operator=(CRetrievalMethodEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRetrievalMethodEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_AVERAGE = 0, // AVERAGE
		k_MAXEXTREME = 1, // MAXEXTREME
		k_MINEXTREME = 2, // MINEXTREME
		k_CLOSEST1D = 3, // CLOSEST1D
		k_CLOSEST2D = 4, // CLOSEST2D
		k_CLOSEST3D = 5, // CLOSEST3D
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRetrievalMethodEnumTypeType
