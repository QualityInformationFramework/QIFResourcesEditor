#pragma once



namespace qif191
{

namespace t
{	

class CCMMScalesType : public TypeBase
{
public:
	QIF191_EXPORT CCMMScalesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMScalesType(CCMMScalesType const& init);
	void operator=(CCMMScalesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCMMScalesType); }
	MemberElement<t::CCMMScaleType, _altova_mi_t_altova_CCMMScalesType_altova_XScale> XScale;
	struct XScale { typedef Iterator<t::CCMMScaleType> iterator; };
	MemberElement<t::CCMMScaleType, _altova_mi_t_altova_CCMMScalesType_altova_YScale> YScale;
	struct YScale { typedef Iterator<t::CCMMScaleType> iterator; };
	MemberElement<t::CCMMScaleType, _altova_mi_t_altova_CCMMScalesType_altova_ZScale> ZScale;
	struct ZScale { typedef Iterator<t::CCMMScaleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMScalesType
