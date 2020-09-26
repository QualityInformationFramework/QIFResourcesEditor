#pragma once



namespace qif191
{

namespace t
{	

class CExclusionType : public TypeBase
{
public:
	QIF191_EXPORT CExclusionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExclusionType(CExclusionType const& init);
	void operator=(CExclusionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExclusionType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CExclusionType_altova_Id> Id;
	struct Id { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CExclusionReasonType, _altova_mi_t_altova_CExclusionType_altova_Reason> Reason;
	struct Reason { typedef Iterator<t::CExclusionReasonType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExclusionType
