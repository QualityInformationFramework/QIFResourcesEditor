#pragma once



namespace qif191
{

namespace t
{	

class CStatsEvalStatusType : public TypeBase
{
public:
	QIF191_EXPORT CStatsEvalStatusType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsEvalStatusType(CStatsEvalStatusType const& init);
	void operator=(CStatsEvalStatusType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsEvalStatusType); }
	MemberElement<t::CStatsEvalStatusEnumTypeType, _altova_mi_t_altova_CStatsEvalStatusType_altova_StatsEvalStatusEnum> StatsEvalStatusEnum;
	struct StatsEvalStatusEnum { typedef Iterator<t::CStatsEvalStatusEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CStatsEvalStatusType_altova_OtherStatsEvalStatus> OtherStatsEvalStatus;
	struct OtherStatsEvalStatus { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsEvalStatusType
