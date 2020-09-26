#pragma once



namespace qif191
{

namespace t
{	

class CPMIDisplaySetType : public TypeBase
{
public:
	QIF191_EXPORT CPMIDisplaySetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPMIDisplaySetType(CPMIDisplaySetType const& init);
	void operator=(CPMIDisplaySetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPMIDisplaySetType); }
	MemberElement<t::CPMIDisplayType, _altova_mi_t_altova_CPMIDisplaySetType_altova_PMIDisplay> PMIDisplay;
	struct PMIDisplay { typedef Iterator<t::CPMIDisplayType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPMIDisplaySetType
