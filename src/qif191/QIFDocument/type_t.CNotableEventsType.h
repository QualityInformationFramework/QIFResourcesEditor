#pragma once



namespace qif191
{

namespace t
{	

class CNotableEventsType : public TypeBase
{
public:
	QIF191_EXPORT CNotableEventsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNotableEventsType(CNotableEventsType const& init);
	void operator=(CNotableEventsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNotableEventsType); }
	MemberElement<t::CNotableEventType, _altova_mi_t_altova_CNotableEventsType_altova_NotableEvent> NotableEvent;
	struct NotableEvent { typedef Iterator<t::CNotableEventType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNotableEventsType
