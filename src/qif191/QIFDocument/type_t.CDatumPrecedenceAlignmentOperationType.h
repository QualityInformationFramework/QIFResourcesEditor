#pragma once

#include "type_t.CAlignmentOperationBaseType.h"


namespace qif191
{

namespace t
{	

class CDatumPrecedenceAlignmentOperationType : public ::qif191::t::CAlignmentOperationBaseType
{
public:
	QIF191_EXPORT CDatumPrecedenceAlignmentOperationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumPrecedenceAlignmentOperationType(CDatumPrecedenceAlignmentOperationType const& init);
	void operator=(CDatumPrecedenceAlignmentOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumPrecedenceAlignmentOperationType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CDatumPrecedenceAlignmentOperationType_altova_DatumReferenceFrameId> DatumReferenceFrameId;
	struct DatumReferenceFrameId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CDatumPrecedenceAlignmentOperationType_altova_PrimaryAxis> PrimaryAxis;
	struct PrimaryAxis { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CDatumPrecedenceAlignmentOperationType_altova_SecondaryAxis> SecondaryAxis;
	struct SecondaryAxis { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumPrecedenceAlignmentOperationType
