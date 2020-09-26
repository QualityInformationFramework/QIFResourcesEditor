#pragma once

#include "type_t.CDatumTargetDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDatumTargetPointDefinitionType : public ::qif191::t::CDatumTargetDefinitionBaseType
{
public:
	QIF191_EXPORT CDatumTargetPointDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTargetPointDefinitionType(CDatumTargetPointDefinitionType const& init);
	void operator=(CDatumTargetPointDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTargetPointDefinitionType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CDatumTargetPointDefinitionType_altova_Point> Point;
	struct Point { typedef Iterator<t::CPointType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTargetPointDefinitionType
