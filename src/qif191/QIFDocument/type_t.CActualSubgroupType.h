#pragma once



namespace qif191
{

namespace t
{	

class CActualSubgroupType : public TypeBase
{
public:
	QIF191_EXPORT CActualSubgroupType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualSubgroupType(CActualSubgroupType const& init);
	void operator=(CActualSubgroupType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualSubgroupType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CActualSubgroupType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CStatsArrayIdType, _altova_mi_t_altova_CActualSubgroupType_altova_ActualIds> ActualIds;
	struct ActualIds { typedef Iterator<t::CStatsArrayIdType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualSubgroupType
