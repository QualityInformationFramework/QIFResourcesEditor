#pragma once



namespace qif191
{

namespace t
{	

class CThreadedFeatureCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CThreadedFeatureCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadedFeatureCheckedType(CThreadedFeatureCheckedType const& init);
	void operator=(CThreadedFeatureCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadedFeatureCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CThreadedFeatureCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CThreadedFeatureConstructionMethodType, _altova_mi_t_altova_CThreadedFeatureCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CThreadedFeatureConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadedFeatureCheckedType
