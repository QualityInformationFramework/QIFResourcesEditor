#pragma once

#include "type_t.CMeasurementResourceBaseType.h"


namespace qif191
{

namespace t
{	

class CCarriageType : public ::qif191::t::CMeasurementResourceBaseType
{
public:
	QIF191_EXPORT CCarriageType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCarriageType(CCarriageType const& init);
	void operator=(CCarriageType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCarriageType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCarriageType_altova_ToolIds> ToolIds;
	struct ToolIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCarriageType
