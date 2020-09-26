#pragma once



namespace qif191
{

namespace t
{	

class CExclusionReasonType : public TypeBase
{
public:
	QIF191_EXPORT CExclusionReasonType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExclusionReasonType(CExclusionReasonType const& init);
	void operator=(CExclusionReasonType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExclusionReasonType); }
	MemberElement<t::CExclusionEnumTypeType, _altova_mi_t_altova_CExclusionReasonType_altova_ExclusionReasonEnum> ExclusionReasonEnum;
	struct ExclusionReasonEnum { typedef Iterator<t::CExclusionEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CExclusionReasonType_altova_OtherExclusionReason> OtherExclusionReason;
	struct OtherExclusionReason { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExclusionReasonType
