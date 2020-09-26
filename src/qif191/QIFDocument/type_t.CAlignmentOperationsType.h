#pragma once



namespace qif191
{

namespace t
{	

class CAlignmentOperationsType : public TypeBase
{
public:
	QIF191_EXPORT CAlignmentOperationsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAlignmentOperationsType(CAlignmentOperationsType const& init);
	void operator=(CAlignmentOperationsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAlignmentOperationsType); }
	MemberElement<t::CAlignmentOperationBaseType, _altova_mi_t_altova_CAlignmentOperationsType_altova_AlignmentOperation> AlignmentOperation;
	struct AlignmentOperation { typedef Iterator<t::CAlignmentOperationBaseType> iterator; };
	MemberElement<t::CActualOffsetAlignmentOperationType, _altova_mi_t_altova_CAlignmentOperationsType_altova_ActualOffset> ActualOffset;
	struct ActualOffset { typedef Iterator<t::CActualOffsetAlignmentOperationType> iterator; };
	MemberElement<t::CBestFitAlignmentOperationType, _altova_mi_t_altova_CAlignmentOperationsType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CBestFitAlignmentOperationType> iterator; };
	MemberElement<t::CDatumPrecedenceAlignmentOperationType, _altova_mi_t_altova_CAlignmentOperationsType_altova_DatumPrecedence> DatumPrecedence;
	struct DatumPrecedence { typedef Iterator<t::CDatumPrecedenceAlignmentOperationType> iterator; };
	MemberElement<t::CMachineCoordinateSystemOperationType, _altova_mi_t_altova_CAlignmentOperationsType_altova_Machine> Machine;
	struct Machine { typedef Iterator<t::CMachineCoordinateSystemOperationType> iterator; };
	MemberElement<t::CNominalOffsetAlignmentOperationType, _altova_mi_t_altova_CAlignmentOperationsType_altova_NominalOffset> NominalOffset;
	struct NominalOffset { typedef Iterator<t::CNominalOffsetAlignmentOperationType> iterator; };
	MemberElement<t::CNominalRotationAlignmentOperationType, _altova_mi_t_altova_CAlignmentOperationsType_altova_NominalRotation> NominalRotation;
	struct NominalRotation { typedef Iterator<t::CNominalRotationAlignmentOperationType> iterator; };
	MemberElement<t::CPrimaryAlignmentOperationType, _altova_mi_t_altova_CAlignmentOperationsType_altova_PrimaryAlignment> PrimaryAlignment;
	struct PrimaryAlignment { typedef Iterator<t::CPrimaryAlignmentOperationType> iterator; };
	MemberElement<t::CSecondaryAlignmentOperationType, _altova_mi_t_altova_CAlignmentOperationsType_altova_SecondaryAlignment> SecondaryAlignment;
	struct SecondaryAlignment { typedef Iterator<t::CSecondaryAlignmentOperationType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CAlignmentOperationsType_altova_BaseCoordinateSystemId> BaseCoordinateSystemId;
	struct BaseCoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAlignmentOperationsType
