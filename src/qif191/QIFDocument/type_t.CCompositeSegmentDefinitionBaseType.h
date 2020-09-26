#pragma once



namespace qif191
{

namespace t
{	

class CCompositeSegmentDefinitionBaseType : public TypeBase
{
public:
	QIF191_EXPORT CCompositeSegmentDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentDefinitionBaseType(CCompositeSegmentDefinitionBaseType const& init);
	void operator=(CCompositeSegmentDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentDefinitionBaseType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCompositeSegmentDefinitionBaseType_altova_DatumReferenceFrameId> DatumReferenceFrameId;
	struct DatumReferenceFrameId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCompositeSegmentDefinitionBaseType_altova_ToleranceValue> ToleranceValue;
	struct ToleranceValue { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentDefinitionBaseType
