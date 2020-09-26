#pragma once



namespace qif191
{

namespace t
{	

class CPointDefinedCurveCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CPointDefinedCurveCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedCurveCheckedFeatureType(CPointDefinedCurveCheckedFeatureType const& init);
	void operator=(CPointDefinedCurveCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedCurveCheckedFeatureType); }
	MemberElement<t::CPointDefinedCurveCheckedType, _altova_mi_t_altova_CPointDefinedCurveCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CPointDefinedCurveCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedCurveCheckedFeatureType
