#pragma once



namespace qif191
{

namespace t
{	

class CPartialInspectionType : public TypeBase
{
public:
	QIF191_EXPORT CPartialInspectionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPartialInspectionType(CPartialInspectionType const& init);
	void operator=(CPartialInspectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPartialInspectionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPartialInspectionType_altova_BaselineProductNumber> BaselineProductNumber;
	struct BaselineProductNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPartialInspectionType_altova_BaselineProductVersion> BaselineProductVersion;
	struct BaselineProductVersion { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPartialInspectionType_altova_ReasonForPartialInspection> ReasonForPartialInspection;
	struct ReasonForPartialInspection { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPartialInspectionType
