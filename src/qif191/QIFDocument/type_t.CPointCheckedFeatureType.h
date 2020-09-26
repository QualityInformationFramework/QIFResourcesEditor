#pragma once



namespace qif191
{

namespace t
{	

class CPointCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CPointCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointCheckedFeatureType(CPointCheckedFeatureType const& init);
	void operator=(CPointCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointCheckedFeatureType); }
	MemberElement<t::CPointCheckedType, _altova_mi_t_altova_CPointCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CPointCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointCheckedFeatureType
