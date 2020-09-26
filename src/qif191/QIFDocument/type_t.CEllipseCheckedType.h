#pragma once



namespace qif191
{

namespace t
{	

class CEllipseCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CEllipseCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipseCheckedType(CEllipseCheckedType const& init);
	void operator=(CEllipseCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipseCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CEllipseCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CEllipseConstructionMethodType, _altova_mi_t_altova_CEllipseCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CEllipseConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipseCheckedType
