#pragma once



namespace qif191
{

namespace t
{	

class CStatsArrayIdType : public TypeBase
{
public:
	QIF191_EXPORT CStatsArrayIdType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsArrayIdType(CStatsArrayIdType const& init);
	void operator=(CStatsArrayIdType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsArrayIdType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStatsArrayIdType_altova_Ids> Ids;
	struct Ids { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CExclusionType, _altova_mi_t_altova_CStatsArrayIdType_altova_Exclusion> Exclusion;
	struct Exclusion { typedef Iterator<t::CExclusionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsArrayIdType
