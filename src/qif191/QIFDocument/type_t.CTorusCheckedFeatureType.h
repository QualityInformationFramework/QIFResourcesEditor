#pragma once



namespace qif191
{

namespace t
{	

class CTorusCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CTorusCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorusCheckedFeatureType(CTorusCheckedFeatureType const& init);
	void operator=(CTorusCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorusCheckedFeatureType); }
	MemberElement<t::CTorusCheckedType, _altova_mi_t_altova_CTorusCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CTorusCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorusCheckedFeatureType
