#pragma once



namespace qif191
{

namespace t
{	

class CVisualizationSetType : public TypeBase
{
public:
	QIF191_EXPORT CVisualizationSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CVisualizationSetType(CVisualizationSetType const& init);
	void operator=(CVisualizationSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CVisualizationSetType); }
	MemberElement<t::CFontsType, _altova_mi_t_altova_CVisualizationSetType_altova_Fonts> Fonts;
	struct Fonts { typedef Iterator<t::CFontsType> iterator; };
	MemberElement<t::CPMIDisplaySetType, _altova_mi_t_altova_CVisualizationSetType_altova_PMIDisplaySet> PMIDisplaySet;
	struct PMIDisplaySet { typedef Iterator<t::CPMIDisplaySetType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CVisualizationSetType
