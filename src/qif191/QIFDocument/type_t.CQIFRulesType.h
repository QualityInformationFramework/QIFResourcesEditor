#pragma once



namespace qif191
{

namespace t
{	

class CQIFRulesType : public TypeBase
{
public:
	QIF191_EXPORT CQIFRulesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQIFRulesType(CQIFRulesType const& init);
	void operator=(CQIFRulesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CQIFRulesType); }
	MemberElement<t::CVersionType, _altova_mi_t_altova_CQIFRulesType_altova_Version> Version;
	struct Version { typedef Iterator<t::CVersionType> iterator; };
	MemberElement<t::COtherUnitsType, _altova_mi_t_altova_CQIFRulesType_altova_RulesUnits> RulesUnits;
	struct RulesUnits { typedef Iterator<t::COtherUnitsType> iterator; };
	MemberElement<t::CFeatureRulesType, _altova_mi_t_altova_CQIFRulesType_altova_FeatureRules> FeatureRules;
	struct FeatureRules { typedef Iterator<t::CFeatureRulesType> iterator; };
	MemberElement<t::CDMESelectionRulesType, _altova_mi_t_altova_CQIFRulesType_altova_DMESelectionRules> DMESelectionRules;
	struct DMESelectionRules { typedef Iterator<t::CDMESelectionRulesType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQIFRulesType
