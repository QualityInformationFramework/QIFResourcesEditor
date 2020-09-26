#pragma once

#include "type_t.CDatumTargetDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDatumTargetRectangularAreaDefinitionType : public ::qif191::t::CDatumTargetDefinitionBaseType
{
public:
	QIF191_EXPORT CDatumTargetRectangularAreaDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTargetRectangularAreaDefinitionType(CDatumTargetRectangularAreaDefinitionType const& init);
	void operator=(CDatumTargetRectangularAreaDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTargetRectangularAreaDefinitionType); }
	MemberElement<t::CRectangleType, _altova_mi_t_altova_CDatumTargetRectangularAreaDefinitionType_altova_Rectangle> Rectangle;
	struct Rectangle { typedef Iterator<t::CRectangleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTargetRectangularAreaDefinitionType
