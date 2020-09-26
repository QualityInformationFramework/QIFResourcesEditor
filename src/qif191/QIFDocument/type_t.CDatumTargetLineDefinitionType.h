#pragma once

#include "type_t.CDatumTargetDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDatumTargetLineDefinitionType : public ::qif191::t::CDatumTargetDefinitionBaseType
{
public:
	QIF191_EXPORT CDatumTargetLineDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTargetLineDefinitionType(CDatumTargetLineDefinitionType const& init);
	void operator=(CDatumTargetLineDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTargetLineDefinitionType); }
	MemberElement<t::CLineSegmentType, _altova_mi_t_altova_CDatumTargetLineDefinitionType_altova_Line> Line;
	struct Line { typedef Iterator<t::CLineSegmentType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTargetLineDefinitionType
