#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CThreadedFeatureCopyType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CThreadedFeatureCopyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadedFeatureCopyType(CThreadedFeatureCopyType const& init);
	void operator=(CThreadedFeatureCopyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadedFeatureCopyType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CThreadedFeatureCopyType_altova_BaseThreadedFeature> BaseThreadedFeature;
	struct BaseThreadedFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadedFeatureCopyType
