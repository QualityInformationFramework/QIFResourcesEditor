#pragma once

#include "type_t.CAlignmentOperationBaseType.h"


namespace qif191
{

namespace t
{	

class CNominalOffsetAlignmentOperationType : public ::qif191::t::CAlignmentOperationBaseType
{
public:
	QIF191_EXPORT CNominalOffsetAlignmentOperationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNominalOffsetAlignmentOperationType(CNominalOffsetAlignmentOperationType const& init);
	void operator=(CNominalOffsetAlignmentOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNominalOffsetAlignmentOperationType); }
	MemberElement<t::CVectorType, _altova_mi_t_altova_CNominalOffsetAlignmentOperationType_altova_Offset> Offset;
	struct Offset { typedef Iterator<t::CVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNominalOffsetAlignmentOperationType
