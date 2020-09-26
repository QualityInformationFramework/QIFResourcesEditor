#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class COppositeLinesCastType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT COppositeLinesCastType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositeLinesCastType(COppositeLinesCastType const& init);
	void operator=(COppositeLinesCastType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositeLinesCastType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_COppositeLinesCastType_altova_BaseFeature> BaseFeature;
	struct BaseFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositeLinesCastType
