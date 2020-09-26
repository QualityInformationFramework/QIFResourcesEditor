#pragma once



namespace qif191
{

namespace t
{	

class CFeatureRulesType : public TypeBase
{
public:
	QIF191_EXPORT CFeatureRulesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureRulesType(CFeatureRulesType const& init);
	void operator=(CFeatureRulesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureRulesType); }
	MemberElement<xs::CunsignedIntType, _altova_mi_t_altova_CFeatureRulesType_altova_SamplingRigorMax> SamplingRigorMax;
	struct SamplingRigorMax { typedef Iterator<xs::CunsignedIntType> iterator; };
	MemberElement<t::CIfThenElseFeatureRulesType, _altova_mi_t_altova_CFeatureRulesType_altova_IfThenElseFeatureRules> IfThenElseFeatureRules;
	struct IfThenElseFeatureRules { typedef Iterator<t::CIfThenElseFeatureRulesType> iterator; };
	MemberElement<t::CMaxFeatureRulesType, _altova_mi_t_altova_CFeatureRulesType_altova_MaxFeatureRules> MaxFeatureRules;
	struct MaxFeatureRules { typedef Iterator<t::CMaxFeatureRulesType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureRulesType
