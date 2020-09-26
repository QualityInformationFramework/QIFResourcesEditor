#pragma once



namespace qif191
{

namespace t
{	

class CSlotEndType : public TypeBase
{
public:
	QIF191_EXPORT CSlotEndType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSlotEndType(CSlotEndType const& init);
	void operator=(CSlotEndType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSlotEndType); }
	MemberElement<t::CSlotEndEnumTypeType, _altova_mi_t_altova_CSlotEndType_altova_SlotEndEnum> SlotEndEnum;
	struct SlotEndEnum { typedef Iterator<t::CSlotEndEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CSlotEndType_altova_OtherSlotEnd> OtherSlotEnd;
	struct OtherSlotEnd { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSlotEndType
