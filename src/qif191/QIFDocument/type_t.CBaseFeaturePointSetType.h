#pragma once



namespace qif191
{

namespace t
{	

class CBaseFeaturePointSetType : public TypeBase
{
public:
	QIF191_EXPORT CBaseFeaturePointSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBaseFeaturePointSetType(CBaseFeaturePointSetType const& init);
	void operator=(CBaseFeaturePointSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBaseFeaturePointSetType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CBaseFeaturePointSetType_altova_FeatureItemId> FeatureItemId;
	struct FeatureItemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CPointIndexType, _altova_mi_t_altova_CBaseFeaturePointSetType_altova_PointIndex> PointIndex;
	struct PointIndex { typedef Iterator<t::CPointIndexType> iterator; };
	MemberElement<t::CReferencedComponentEnumTypeType, _altova_mi_t_altova_CBaseFeaturePointSetType_altova_ReferencedComponent> ReferencedComponent;
	struct ReferencedComponent { typedef Iterator<t::CReferencedComponentEnumTypeType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CBaseFeaturePointSetType_altova_SequenceNumber> SequenceNumber;
	struct SequenceNumber { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBaseFeaturePointSetType
