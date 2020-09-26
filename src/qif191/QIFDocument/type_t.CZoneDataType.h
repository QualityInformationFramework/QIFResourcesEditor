#pragma once



namespace qif191
{

namespace t
{	

class CZoneDataType : public TypeBase
{
public:
	QIF191_EXPORT CZoneDataType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CZoneDataType(CZoneDataType const& init);
	void operator=(CZoneDataType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CZoneDataType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CZoneDataType_altova_FeatureItemId> FeatureItemId;
	struct FeatureItemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CZoneDataType_altova_Bonus> Bonus;
	struct Bonus { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CZoneDataType_altova_ReferenceLength> ReferenceLength;
	struct ReferenceLength { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CZoneDataType
