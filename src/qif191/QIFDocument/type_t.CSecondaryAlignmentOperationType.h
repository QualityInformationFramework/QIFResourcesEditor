#pragma once

#include "type_t.CAlignmentOperationBaseType.h"


namespace qif191
{

namespace t
{	

class CSecondaryAlignmentOperationType : public ::qif191::t::CAlignmentOperationBaseType
{
public:
	QIF191_EXPORT CSecondaryAlignmentOperationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSecondaryAlignmentOperationType(CSecondaryAlignmentOperationType const& init);
	void operator=(CSecondaryAlignmentOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSecondaryAlignmentOperationType); }
	MemberElement<t::CAlignmentFeatureType, _altova_mi_t_altova_CSecondaryAlignmentOperationType_altova_SecondaryEntity> SecondaryEntity;
	struct SecondaryEntity { typedef Iterator<t::CAlignmentFeatureType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CSecondaryAlignmentOperationType_altova_SecondaryAxis> SecondaryAxis;
	struct SecondaryAxis { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CSecondaryAlignmentOperationType_altova_RotationAxis> RotationAxis;
	struct RotationAxis { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSecondaryAlignmentOperationType
