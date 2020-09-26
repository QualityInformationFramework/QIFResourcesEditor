#pragma once



namespace qif191
{

namespace t
{	

class CCompositeSegmentActualBaseType : public TypeBase
{
public:
	QIF191_EXPORT CCompositeSegmentActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentActualBaseType(CCompositeSegmentActualBaseType const& init);
	void operator=(CCompositeSegmentActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentActualBaseType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCompositeSegmentActualBaseType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCompositeSegmentActualBaseType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCompositeSegmentActualBaseType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CCharacteristicStatusType, _altova_mi_t_altova_CCompositeSegmentActualBaseType_altova_Status> Status;
	struct Status { typedef Iterator<t::CCharacteristicStatusType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCompositeSegmentActualBaseType_altova_DRFTransformActualId> DRFTransformActualId;
	struct DRFTransformActualId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CZoneDataType, _altova_mi_t_altova_CCompositeSegmentActualBaseType_altova_ZoneData> ZoneData;
	struct ZoneData { typedef Iterator<t::CZoneDataType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentActualBaseType
