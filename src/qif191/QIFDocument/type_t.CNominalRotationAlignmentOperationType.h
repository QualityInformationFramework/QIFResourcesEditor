#pragma once

#include "type_t.CAlignmentOperationBaseType.h"


namespace qif191
{

namespace t
{	

class CNominalRotationAlignmentOperationType : public ::qif191::t::CAlignmentOperationBaseType
{
public:
	QIF191_EXPORT CNominalRotationAlignmentOperationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNominalRotationAlignmentOperationType(CNominalRotationAlignmentOperationType const& init);
	void operator=(CNominalRotationAlignmentOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNominalRotationAlignmentOperationType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CNominalRotationAlignmentOperationType_altova_RotationAxis> RotationAxis;
	struct RotationAxis { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CNominalRotationAlignmentOperationType_altova_Angle> Angle;
	struct Angle { typedef Iterator<t::CAngularValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNominalRotationAlignmentOperationType
