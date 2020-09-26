#pragma once



namespace qif191
{

namespace t
{	

class CQualificationType : public TypeBase
{
public:
	QIF191_EXPORT CQualificationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQualificationType(CQualificationType const& init);
	void operator=(CQualificationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CQualificationType); }
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CQualificationType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CQualificationType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQualificationType
