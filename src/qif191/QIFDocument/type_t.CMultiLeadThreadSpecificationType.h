#pragma once

#include "type_t.CThreadSpecificationDetailedBaseType.h"


namespace qif191
{

namespace t
{	

class CMultiLeadThreadSpecificationType : public ::qif191::t::CThreadSpecificationDetailedBaseType
{
public:
	QIF191_EXPORT CMultiLeadThreadSpecificationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMultiLeadThreadSpecificationType(CMultiLeadThreadSpecificationType const& init);
	void operator=(CMultiLeadThreadSpecificationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMultiLeadThreadSpecificationType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CMultiLeadThreadSpecificationType_altova_ThreadPitch> ThreadPitch;
	struct ThreadPitch { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CMultiLeadThreadSpecificationType_altova_ThreadLeadDistance> ThreadLeadDistance;
	struct ThreadLeadDistance { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CMultiLeadThreadSpecificationType_altova_ThreadLeadStarts> ThreadLeadStarts;
	struct ThreadLeadStarts { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMultiLeadThreadSpecificationType
