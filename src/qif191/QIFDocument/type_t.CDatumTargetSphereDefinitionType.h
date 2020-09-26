#pragma once

#include "type_t.CDatumTargetDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDatumTargetSphereDefinitionType : public ::qif191::t::CDatumTargetDefinitionBaseType
{
public:
	QIF191_EXPORT CDatumTargetSphereDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTargetSphereDefinitionType(CDatumTargetSphereDefinitionType const& init);
	void operator=(CDatumTargetSphereDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTargetSphereDefinitionType); }
	MemberElement<t::CSphereType, _altova_mi_t_altova_CDatumTargetSphereDefinitionType_altova_Sphere> Sphere;
	struct Sphere { typedef Iterator<t::CSphereType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTargetSphereDefinitionType
