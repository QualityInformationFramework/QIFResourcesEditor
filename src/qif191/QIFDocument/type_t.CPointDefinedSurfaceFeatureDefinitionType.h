#pragma once

#include "type_t.CFeatureDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CPointDefinedSurfaceFeatureDefinitionType : public ::qif191::t::CFeatureDefinitionBaseType
{
public:
	QIF191_EXPORT CPointDefinedSurfaceFeatureDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedSurfaceFeatureDefinitionType(CPointDefinedSurfaceFeatureDefinitionType const& init);
	void operator=(CPointDefinedSurfaceFeatureDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedSurfaceFeatureDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedSurfaceFeatureDefinitionType
