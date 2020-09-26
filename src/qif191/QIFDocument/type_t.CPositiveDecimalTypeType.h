#pragma once



namespace qif191
{

namespace t
{	

class CPositiveDecimalTypeType : public TypeBase
{
public:
	QIF191_EXPORT CPositiveDecimalTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositiveDecimalTypeType(CPositiveDecimalTypeType const& init);
	void operator=(CPositiveDecimalTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPositiveDecimalTypeType); }
	QIF191_EXPORT void operator=(const double& value);
	QIF191_EXPORT operator double();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositiveDecimalTypeType
