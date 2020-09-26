#pragma once



namespace qif191
{

namespace t
{	

class CDMESelectionRulesType : public TypeBase
{
public:
	QIF191_EXPORT CDMESelectionRulesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDMESelectionRulesType(CDMESelectionRulesType const& init);
	void operator=(CDMESelectionRulesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDMESelectionRulesType); }
	MemberElement<t::CDMESelectionRuleType, _altova_mi_t_altova_CDMESelectionRulesType_altova_DMESelectionRule> DMESelectionRule;
	struct DMESelectionRule { typedef Iterator<t::CDMESelectionRuleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDMESelectionRulesType
