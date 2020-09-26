#pragma once



namespace qif191
{

namespace t
{	

class CPointDefinedSurfaceCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CPointDefinedSurfaceCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedSurfaceCheckedFeatureType(CPointDefinedSurfaceCheckedFeatureType const& init);
	void operator=(CPointDefinedSurfaceCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedSurfaceCheckedFeatureType); }
	MemberElement<t::CPointDefinedSurfaceCheckedType, _altova_mi_t_altova_CPointDefinedSurfaceCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CPointDefinedSurfaceCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedSurfaceCheckedFeatureType
