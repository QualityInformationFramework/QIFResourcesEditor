#pragma once

#include "type_t.CCompositeSegmentDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCompositeSegmentPositionDefinitionType : public ::qif191::t::CCompositeSegmentDefinitionBaseType
{
public:
	QIF191_EXPORT CCompositeSegmentPositionDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentPositionDefinitionType(CCompositeSegmentPositionDefinitionType const& init);
	void operator=(CCompositeSegmentPositionDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentPositionDefinitionType); }
	MemberElement<t::CMaterialModifierEnumTypeType, _altova_mi_t_altova_CCompositeSegmentPositionDefinitionType_altova_MaterialCondition> MaterialCondition;
	struct MaterialCondition { typedef Iterator<t::CMaterialModifierEnumTypeType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCompositeSegmentPositionDefinitionType_altova_ProjectedToleranceZone> ProjectedToleranceZone;
	struct ProjectedToleranceZone { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentPositionDefinitionType
