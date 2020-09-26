#pragma once

#include "type_t.CCompositeFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CPatternFeatureNominalType : public ::qif191::t::CCompositeFeatureNominalBaseType
{
public:
	QIF191_EXPORT CPatternFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPatternFeatureNominalType(CPatternFeatureNominalType const& init);
	void operator=(CPatternFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPatternFeatureNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPatternFeatureNominalType
