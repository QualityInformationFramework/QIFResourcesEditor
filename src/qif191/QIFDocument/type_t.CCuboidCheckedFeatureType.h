#pragma once



namespace qif191
{

namespace t
{	

class CCuboidCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CCuboidCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCuboidCheckedFeatureType(CCuboidCheckedFeatureType const& init);
	void operator=(CCuboidCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCuboidCheckedFeatureType); }
	MemberElement<t::CCuboidCheckedType, _altova_mi_t_altova_CCuboidCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CCuboidCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCuboidCheckedFeatureType
