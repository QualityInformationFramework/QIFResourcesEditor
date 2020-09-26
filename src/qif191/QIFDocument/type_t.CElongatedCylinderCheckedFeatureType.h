#pragma once



namespace qif191
{

namespace t
{	

class CElongatedCylinderCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CElongatedCylinderCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElongatedCylinderCheckedFeatureType(CElongatedCylinderCheckedFeatureType const& init);
	void operator=(CElongatedCylinderCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElongatedCylinderCheckedFeatureType); }
	MemberElement<t::CElongatedCylinderCheckedType, _altova_mi_t_altova_CElongatedCylinderCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CElongatedCylinderCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElongatedCylinderCheckedFeatureType
