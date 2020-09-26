#pragma once

#include "type_t.CCompositeFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CPatternFeatureActualType : public ::qif191::t::CCompositeFeatureActualBaseType
{
public:
	QIF191_EXPORT CPatternFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPatternFeatureActualType(CPatternFeatureActualType const& init);
	void operator=(CPatternFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPatternFeatureActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPatternFeatureActualType
