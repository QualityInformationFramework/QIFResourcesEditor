#pragma once



namespace qif191
{

namespace t
{	

class CInspectionStatusType : public TypeBase
{
public:
	QIF191_EXPORT CInspectionStatusType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInspectionStatusType(CInspectionStatusType const& init);
	void operator=(CInspectionStatusType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CInspectionStatusType); }
	MemberElement<t::CInspectionStatusEnumTypeType, _altova_mi_t_altova_CInspectionStatusType_altova_InspectionStatusEnum> InspectionStatusEnum;
	struct InspectionStatusEnum { typedef Iterator<t::CInspectionStatusEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CInspectionStatusType_altova_OtherInspectionStatus> OtherInspectionStatus;
	struct OtherInspectionStatus { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInspectionStatusType
