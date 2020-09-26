#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CCircleCopyType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CCircleCopyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircleCopyType(CCircleCopyType const& init);
	void operator=(CCircleCopyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircleCopyType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CCircleCopyType_altova_BaseCircle> BaseCircle;
	struct BaseCircle { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircleCopyType
