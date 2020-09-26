#pragma once

#include "type_t.CEventBaseType.h"


namespace qif191
{

namespace t
{	

class CNotableEventType : public ::qif191::t::CEventBaseType
{
public:
	QIF191_EXPORT CNotableEventType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNotableEventType(CNotableEventType const& init);
	void operator=(CNotableEventType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNotableEventType); }
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CNotableEventType_altova_Active> Active;
	struct Active { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNotableEventType
