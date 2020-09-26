#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CCylinderCopyType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CCylinderCopyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylinderCopyType(CCylinderCopyType const& init);
	void operator=(CCylinderCopyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylinderCopyType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CCylinderCopyType_altova_BaseCylinder> BaseCylinder;
	struct BaseCylinder { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylinderCopyType
