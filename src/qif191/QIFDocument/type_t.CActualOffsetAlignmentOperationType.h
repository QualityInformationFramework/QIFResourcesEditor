#pragma once

#include "type_t.CAlignmentOperationBaseType.h"


namespace qif191
{

namespace t
{	

class CActualOffsetAlignmentOperationType : public ::qif191::t::CAlignmentOperationBaseType
{
public:
	QIF191_EXPORT CActualOffsetAlignmentOperationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualOffsetAlignmentOperationType(CActualOffsetAlignmentOperationType const& init);
	void operator=(CActualOffsetAlignmentOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualOffsetAlignmentOperationType); }
	MemberElement<t::CActualOriginOffsetType, _altova_mi_t_altova_CActualOffsetAlignmentOperationType_altova_Origin> Origin;
	struct Origin { typedef Iterator<t::CActualOriginOffsetType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualOffsetAlignmentOperationType
