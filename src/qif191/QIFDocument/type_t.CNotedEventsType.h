#pragma once



namespace qif191
{

namespace t
{	

class CNotedEventsType : public TypeBase
{
public:
	QIF191_EXPORT CNotedEventsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNotedEventsType(CNotedEventsType const& init);
	void operator=(CNotedEventsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNotedEventsType); }
	MemberElement<t::CNotedEventType, _altova_mi_t_altova_CNotedEventsType_altova_NotedEvent> NotedEvent;
	struct NotedEvent { typedef Iterator<t::CNotedEventType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNotedEventsType
