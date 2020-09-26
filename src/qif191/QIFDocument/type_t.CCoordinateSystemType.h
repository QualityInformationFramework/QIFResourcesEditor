#pragma once



namespace qif191
{

namespace t
{	

class CCoordinateSystemType : public TypeBase
{
public:
	QIF191_EXPORT CCoordinateSystemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateSystemType(CCoordinateSystemType const& init);
	void operator=(CCoordinateSystemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateSystemType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCoordinateSystemType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CCoordinateSystemType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CCoordinateSystemType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<t::CTransformMatrixType, _altova_mi_t_altova_CCoordinateSystemType_altova_NominalTransform> NominalTransform;
	struct NominalTransform { typedef Iterator<t::CTransformMatrixType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCoordinateSystemType_altova_InternalCADCoordinateSystemId> InternalCADCoordinateSystemId;
	struct InternalCADCoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCoordinateSystemType_altova_ExternalCADCoordinateSystemId> ExternalCADCoordinateSystemId;
	struct ExternalCADCoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CAlignmentOperationsType, _altova_mi_t_altova_CCoordinateSystemType_altova_AlignmentOperations> AlignmentOperations;
	struct AlignmentOperations { typedef Iterator<t::CAlignmentOperationsType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CCoordinateSystemType_altova_SequenceNumber> SequenceNumber;
	struct SequenceNumber { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateSystemType
