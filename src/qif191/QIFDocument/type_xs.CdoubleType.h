#pragma once



namespace qif191
{

namespace xs
{	

class CdoubleType : public TypeBase
{
public:
	QIF191_EXPORT CdoubleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CdoubleType(CdoubleType const& init);
	void operator=(CdoubleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CdoubleType); }
	QIF191_EXPORT void operator=(const double& value);
	QIF191_EXPORT operator double();
	QIF191_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_xs_ALTOVA_CdoubleType
