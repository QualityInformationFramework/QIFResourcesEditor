#pragma once

#include "type_t.CFeatureBaseType.h"


namespace qif191
{

namespace t
{	

class CFeatureDefinitionBaseType : public ::qif191::t::CFeatureBaseType
{
public:
	QIF191_EXPORT CFeatureDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureDefinitionBaseType(CFeatureDefinitionBaseType const& init);
	void operator=(CFeatureDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureDefinitionBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureDefinitionBaseType
