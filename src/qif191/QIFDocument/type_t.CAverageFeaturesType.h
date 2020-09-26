#pragma once



namespace qif191
{

namespace t
{	

class CAverageFeaturesType : public TypeBase
{
public:
	QIF191_EXPORT CAverageFeaturesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAverageFeaturesType(CAverageFeaturesType const& init);
	void operator=(CAverageFeaturesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAverageFeaturesType); }
	MemberElement<t::CAverageFeatureType, _altova_mi_t_altova_CAverageFeaturesType_altova_AverageFeature> AverageFeature;
	struct AverageFeature { typedef Iterator<t::CAverageFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAverageFeaturesType
