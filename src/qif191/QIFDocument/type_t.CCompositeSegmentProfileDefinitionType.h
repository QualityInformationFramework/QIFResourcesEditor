#pragma once

#include "type_t.CCompositeSegmentDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCompositeSegmentProfileDefinitionType : public ::qif191::t::CCompositeSegmentDefinitionBaseType
{
public:
	QIF191_EXPORT CCompositeSegmentProfileDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentProfileDefinitionType(CCompositeSegmentProfileDefinitionType const& init);
	void operator=(CCompositeSegmentProfileDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentProfileDefinitionType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCompositeSegmentProfileDefinitionType_altova_OuterDisposition> OuterDisposition;
	struct OuterDisposition { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentProfileDefinitionType
