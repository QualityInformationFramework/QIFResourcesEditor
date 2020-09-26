#pragma once



namespace qif191
{

namespace t
{	

class CStatsBaseType : public TypeBase
{
public:
	QIF191_EXPORT CStatsBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsBaseType(CStatsBaseType const& init);
	void operator=(CStatsBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsBaseType); }
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_t_altova_CStatsBaseType_altova_TotalNumber> TotalNumber;
	struct TotalNumber { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	MemberElement<t::CSubgroupIntegerType, _altova_mi_t_altova_CStatsBaseType_altova_SubgroupTotalNumber> SubgroupTotalNumber;
	struct SubgroupTotalNumber { typedef Iterator<t::CSubgroupIntegerType> iterator; };
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_t_altova_CStatsBaseType_altova_EffectiveNumber> EffectiveNumber;
	struct EffectiveNumber { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	MemberElement<t::CSubgroupIntegerType, _altova_mi_t_altova_CStatsBaseType_altova_SubgroupEffectiveNumber> SubgroupEffectiveNumber;
	struct SubgroupEffectiveNumber { typedef Iterator<t::CSubgroupIntegerType> iterator; };
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_t_altova_CStatsBaseType_altova_NumberSubgroups> NumberSubgroups;
	struct NumberSubgroups { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsBaseType
