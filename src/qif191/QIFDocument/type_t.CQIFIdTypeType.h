#pragma once



namespace qif191
{

namespace t
{	

class CQIFIdTypeType : public TypeBase
{
public:
	QIF191_EXPORT CQIFIdTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQIFIdTypeType(CQIFIdTypeType const& init);
	void operator=(CQIFIdTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CQIFIdTypeType); }
	QIF191_EXPORT void operator=(const unsigned& value);
	QIF191_EXPORT operator unsigned();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQIFIdTypeType
