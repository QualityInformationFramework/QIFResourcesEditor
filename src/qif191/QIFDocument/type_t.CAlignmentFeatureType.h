#pragma once



namespace qif191
{

namespace t
{	

class CAlignmentFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CAlignmentFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAlignmentFeatureType(CAlignmentFeatureType const& init);
	void operator=(CAlignmentFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAlignmentFeatureType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CAlignmentFeatureType_altova_DatumDefinitionId> DatumDefinitionId;
	struct DatumDefinitionId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CAlignmentFeatureType_altova_BaseFeature> BaseFeature;
	struct BaseFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAlignmentFeatureType
