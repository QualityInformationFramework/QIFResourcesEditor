#pragma once



namespace qif191
{

namespace t
{	

class CVersionHistoryType : public TypeBase
{
public:
	QIF191_EXPORT CVersionHistoryType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CVersionHistoryType(CVersionHistoryType const& init);
	void operator=(CVersionHistoryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CVersionHistoryType); }
	MemberElement<t::CVersionType, _altova_mi_t_altova_CVersionHistoryType_altova_Version> Version;
	struct Version { typedef Iterator<t::CVersionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CVersionHistoryType
