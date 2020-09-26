#pragma once



namespace qif191
{

namespace t
{	

class CActualComponentType : public TypeBase
{
public:
	QIF191_EXPORT CActualComponentType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualComponentType(CActualComponentType const& init);
	void operator=(CActualComponentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualComponentType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CActualComponentType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CActualComponentType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CActualComponentType_altova_SerialNumber> SerialNumber;
	struct SerialNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CActualComponentType_altova_AdditionalChanges> AdditionalChanges;
	struct AdditionalChanges { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CInspectionStatusType, _altova_mi_t_altova_CActualComponentType_altova_Status> Status;
	struct Status { typedef Iterator<t::CInspectionStatusType> iterator; };
	MemberElement<t::CActualProductTraceabilityType, _altova_mi_t_altova_CActualComponentType_altova_Traceability> Traceability;
	struct Traceability { typedef Iterator<t::CActualProductTraceabilityType> iterator; };
	MemberElement<t::CQIFReferenceType, _altova_mi_t_altova_CActualComponentType_altova_AsmPathId> AsmPathId;
	struct AsmPathId { typedef Iterator<t::CQIFReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualComponentType
