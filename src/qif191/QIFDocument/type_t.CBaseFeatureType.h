#pragma once



namespace qif191
{

namespace t
{	

class CBaseFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CBaseFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBaseFeatureType(CBaseFeatureType const& init);
	void operator=(CBaseFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBaseFeatureType); }
	MemberElement<t::CReferencedComponentEnumTypeType, _altova_mi_t_altova_CBaseFeatureType_altova_ReferencedComponent> ReferencedComponent;
	struct ReferencedComponent { typedef Iterator<t::CReferencedComponentEnumTypeType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CBaseFeatureType_altova_FeatureItemId> FeatureItemId;
	struct FeatureItemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBaseFeatureType
