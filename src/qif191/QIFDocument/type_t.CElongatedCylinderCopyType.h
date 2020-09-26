#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CElongatedCylinderCopyType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CElongatedCylinderCopyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElongatedCylinderCopyType(CElongatedCylinderCopyType const& init);
	void operator=(CElongatedCylinderCopyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElongatedCylinderCopyType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CElongatedCylinderCopyType_altova_BaseElongatedCylinder> BaseElongatedCylinder;
	struct BaseElongatedCylinder { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElongatedCylinderCopyType
