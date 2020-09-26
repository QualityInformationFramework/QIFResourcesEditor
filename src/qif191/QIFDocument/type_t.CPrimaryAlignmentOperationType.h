#pragma once

#include "type_t.CAlignmentOperationBaseType.h"


namespace qif191
{

namespace t
{	

class CPrimaryAlignmentOperationType : public ::qif191::t::CAlignmentOperationBaseType
{
public:
	QIF191_EXPORT CPrimaryAlignmentOperationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPrimaryAlignmentOperationType(CPrimaryAlignmentOperationType const& init);
	void operator=(CPrimaryAlignmentOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPrimaryAlignmentOperationType); }
	MemberElement<t::CAlignmentFeatureType, _altova_mi_t_altova_CPrimaryAlignmentOperationType_altova_PrimaryEntity> PrimaryEntity;
	struct PrimaryEntity { typedef Iterator<t::CAlignmentFeatureType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPrimaryAlignmentOperationType_altova_PrimaryAxis> PrimaryAxis;
	struct PrimaryAxis { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPrimaryAlignmentOperationType
