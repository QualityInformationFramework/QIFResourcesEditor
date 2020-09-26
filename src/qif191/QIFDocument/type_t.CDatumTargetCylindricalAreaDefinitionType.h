#pragma once

#include "type_t.CDatumTargetDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDatumTargetCylindricalAreaDefinitionType : public ::qif191::t::CDatumTargetDefinitionBaseType
{
public:
	QIF191_EXPORT CDatumTargetCylindricalAreaDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTargetCylindricalAreaDefinitionType(CDatumTargetCylindricalAreaDefinitionType const& init);
	void operator=(CDatumTargetCylindricalAreaDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTargetCylindricalAreaDefinitionType); }
	MemberElement<t::CCylinderType, _altova_mi_t_altova_CDatumTargetCylindricalAreaDefinitionType_altova_Cylinder> Cylinder;
	struct Cylinder { typedef Iterator<t::CCylinderType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTargetCylindricalAreaDefinitionType
