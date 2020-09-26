#pragma once



namespace qif191
{

namespace t
{	

class CMeasuredFeaturesType : public TypeBase
{
public:
	QIF191_EXPORT CMeasuredFeaturesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasuredFeaturesType(CMeasuredFeaturesType const& init);
	void operator=(CMeasuredFeaturesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasuredFeaturesType); }
	MemberElement<t::CFeatureActualsType, _altova_mi_t_altova_CMeasuredFeaturesType_altova_FeatureActuals> FeatureActuals;
	struct FeatureActuals { typedef Iterator<t::CFeatureActualsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasuredFeaturesType
