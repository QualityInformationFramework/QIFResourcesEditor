#pragma once



namespace qif191
{

namespace t
{	

class CD4TypeType : public TypeBase
{
public:
	QIF191_EXPORT CD4TypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CD4TypeType(CD4TypeType const& init);
	void operator=(CD4TypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CD4TypeType); }
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CD4TypeType
