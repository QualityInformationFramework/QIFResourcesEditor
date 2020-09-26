#pragma once



namespace qif191
{

namespace t
{	

class CCylinderCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CCylinderCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylinderCheckedFeatureType(CCylinderCheckedFeatureType const& init);
	void operator=(CCylinderCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylinderCheckedFeatureType); }
	MemberElement<t::CCylinderCheckedType, _altova_mi_t_altova_CCylinderCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CCylinderCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylinderCheckedFeatureType
