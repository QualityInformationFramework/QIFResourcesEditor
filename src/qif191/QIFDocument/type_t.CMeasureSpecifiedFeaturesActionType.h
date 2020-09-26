#pragma once

#include "type_t.CActionBaseType.h"


namespace qif191
{

namespace t
{	

class CMeasureSpecifiedFeaturesActionType : public ::qif191::t::CActionBaseType
{
public:
	QIF191_EXPORT CMeasureSpecifiedFeaturesActionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasureSpecifiedFeaturesActionType(CMeasureSpecifiedFeaturesActionType const& init);
	void operator=(CMeasureSpecifiedFeaturesActionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasureSpecifiedFeaturesActionType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CMeasureSpecifiedFeaturesActionType_altova_FeatureItemIds> FeatureItemIds;
	struct FeatureItemIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasureSpecifiedFeaturesActionType
