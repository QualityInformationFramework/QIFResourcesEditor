#pragma once

#include "type_t.CEventBaseType.h"


namespace qif191
{

namespace t
{	

class CNotedEventType : public ::qif191::t::CEventBaseType
{
public:
	QIF191_EXPORT CNotedEventType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNotedEventType(CNotedEventType const& init);
	void operator=(CNotedEventType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNotedEventType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CNotedEventType_altova_SequenceNumber> SequenceNumber;
	struct SequenceNumber { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_t_altova_CNotedEventType_altova_TimeOccurred> TimeOccurred;
	struct TimeOccurred { typedef Iterator<xs::CdateTimeType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CNotedEventType_altova_NotableEventId> NotableEventId;
	struct NotableEventId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNotedEventType
