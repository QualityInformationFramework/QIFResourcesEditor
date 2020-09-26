#pragma once



namespace qif191
{

namespace t
{	

class CTimeDescriptionType : public TypeBase
{
public:
	QIF191_EXPORT CTimeDescriptionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTimeDescriptionType(CTimeDescriptionType const& init);
	void operator=(CTimeDescriptionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTimeDescriptionType); }
	MemberElement<t::CTimeDescriptionEnumTypeType, _altova_mi_t_altova_CTimeDescriptionType_altova_TimeDescriptionEnum> TimeDescriptionEnum;
	struct TimeDescriptionEnum { typedef Iterator<t::CTimeDescriptionEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CTimeDescriptionType_altova_OtherTimeDescription> OtherTimeDescription;
	struct OtherTimeDescription { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTimeDescriptionType
