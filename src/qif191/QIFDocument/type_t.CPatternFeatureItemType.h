#pragma once

#include "type_t.CCompositeFeatureItemBaseType.h"


namespace qif191
{

namespace t
{	

class CPatternFeatureItemType : public ::qif191::t::CCompositeFeatureItemBaseType
{
public:
	QIF191_EXPORT CPatternFeatureItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPatternFeatureItemType(CPatternFeatureItemType const& init);
	void operator=(CPatternFeatureItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPatternFeatureItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPatternFeatureItemType
