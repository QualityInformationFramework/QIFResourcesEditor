#pragma once



namespace qif191
{

namespace t
{	

class CVersionsType : public TypeBase
{
public:
	QIF191_EXPORT CVersionsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CVersionsType(CVersionsType const& init);
	void operator=(CVersionsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CVersionsType); }
	MemberElement<t::CVersionHistoryType, _altova_mi_t_altova_CVersionsType_altova_VersionHistory> VersionHistory;
	struct VersionHistory { typedef Iterator<t::CVersionHistoryType> iterator; };
	MemberElement<t::CVersionType, _altova_mi_t_altova_CVersionsType_altova_CurrentVersion> CurrentVersion;
	struct CurrentVersion { typedef Iterator<t::CVersionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CVersionsType
