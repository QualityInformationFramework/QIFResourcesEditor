#pragma once



namespace qif191
{

namespace t
{	

class CEllipseCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CEllipseCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipseCheckedFeatureType(CEllipseCheckedFeatureType const& init);
	void operator=(CEllipseCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipseCheckedFeatureType); }
	MemberElement<t::CEllipseCheckedType, _altova_mi_t_altova_CEllipseCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CEllipseCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipseCheckedFeatureType
