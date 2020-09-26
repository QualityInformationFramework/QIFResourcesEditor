#pragma once



namespace qif191
{

namespace t
{	

class CTransformationReferenceType : public TypeBase
{
public:
	QIF191_EXPORT CTransformationReferenceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTransformationReferenceType(CTransformationReferenceType const& init);
	void operator=(CTransformationReferenceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTransformationReferenceType); }
	MemberElement<t::CReferencedComponentEnumTypeType, _altova_mi_t_altova_CTransformationReferenceType_altova_ReferencedComponent> ReferencedComponent;
	struct ReferencedComponent { typedef Iterator<t::CReferencedComponentEnumTypeType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CTransformationReferenceType_altova_CoordinateSystemId> CoordinateSystemId;
	struct CoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CTransformationReferenceType_altova_SequenceNumber> SequenceNumber;
	struct SequenceNumber { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTransformationReferenceType
