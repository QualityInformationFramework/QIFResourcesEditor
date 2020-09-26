#pragma once



namespace qif191
{

namespace t
{	

class CPlaneCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CPlaneCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneCheckedFeatureType(CPlaneCheckedFeatureType const& init);
	void operator=(CPlaneCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneCheckedFeatureType); }
	MemberElement<t::CPlaneCheckedType, _altova_mi_t_altova_CPlaneCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CPlaneCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneCheckedFeatureType
