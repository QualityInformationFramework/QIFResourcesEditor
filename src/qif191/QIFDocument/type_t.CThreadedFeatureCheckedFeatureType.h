#pragma once



namespace qif191
{

namespace t
{	

class CThreadedFeatureCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CThreadedFeatureCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadedFeatureCheckedFeatureType(CThreadedFeatureCheckedFeatureType const& init);
	void operator=(CThreadedFeatureCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadedFeatureCheckedFeatureType); }
	MemberElement<t::CThreadedFeatureCheckedType, _altova_mi_t_altova_CThreadedFeatureCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CThreadedFeatureCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadedFeatureCheckedFeatureType
