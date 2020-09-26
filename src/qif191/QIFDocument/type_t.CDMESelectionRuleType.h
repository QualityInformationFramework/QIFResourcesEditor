#pragma once



namespace qif191
{

namespace t
{	

class CDMESelectionRuleType : public TypeBase
{
public:
	QIF191_EXPORT CDMESelectionRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDMESelectionRuleType(CDMESelectionRuleType const& init);
	void operator=(CDMESelectionRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDMESelectionRuleType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDMESelectionRuleType
