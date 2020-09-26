#pragma once

#include "type_t.CDatumTargetDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDatumTargetCircularLineDefinitionType : public ::qif191::t::CDatumTargetDefinitionBaseType
{
public:
	QIF191_EXPORT CDatumTargetCircularLineDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTargetCircularLineDefinitionType(CDatumTargetCircularLineDefinitionType const& init);
	void operator=(CDatumTargetCircularLineDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTargetCircularLineDefinitionType); }
	MemberElement<t::CCircleType, _altova_mi_t_altova_CDatumTargetCircularLineDefinitionType_altova_Circle> Circle;
	struct Circle { typedef Iterator<t::CCircleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTargetCircularLineDefinitionType
