#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CCircleTangentType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CCircleTangentType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircleTangentType(CCircleTangentType const& init);
	void operator=(CCircleTangentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircleTangentType); }
	MemberElement<t::CSequencedBaseFeatureType, _altova_mi_t_altova_CCircleTangentType_altova_TangentFeature> TangentFeature;
	struct TangentFeature { typedef Iterator<t::CSequencedBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircleTangentType
