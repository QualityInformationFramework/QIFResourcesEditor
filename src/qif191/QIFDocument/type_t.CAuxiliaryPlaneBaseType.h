#pragma once

#include "type_t.CAuxiliaryBaseType.h"


namespace qif191
{

namespace t
{	

class CAuxiliaryPlaneBaseType : public ::qif191::t::CAuxiliaryBaseType
{
public:
	QIF191_EXPORT CAuxiliaryPlaneBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAuxiliaryPlaneBaseType(CAuxiliaryPlaneBaseType const& init);
	void operator=(CAuxiliaryPlaneBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAuxiliaryPlaneBaseType); }
	MemberElement<t::CPlaneType, _altova_mi_t_altova_CAuxiliaryPlaneBaseType_altova_Plane> Plane;
	struct Plane { typedef Iterator<t::CPlaneType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAuxiliaryPlaneBaseType
