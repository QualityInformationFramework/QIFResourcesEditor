#pragma once



namespace qif191
{

namespace t
{	

class CSecurityClassificationType : public TypeBase
{
public:
	QIF191_EXPORT CSecurityClassificationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSecurityClassificationType(CSecurityClassificationType const& init);
	void operator=(CSecurityClassificationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSecurityClassificationType); }
	MemberElement<t::CSecurityClassificationEnumTypeType, _altova_mi_t_altova_CSecurityClassificationType_altova_SecurityClassificationEnum> SecurityClassificationEnum;
	struct SecurityClassificationEnum { typedef Iterator<t::CSecurityClassificationEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CSecurityClassificationType_altova_OtherSecurityClassification> OtherSecurityClassification;
	struct OtherSecurityClassification { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSecurityClassificationType
