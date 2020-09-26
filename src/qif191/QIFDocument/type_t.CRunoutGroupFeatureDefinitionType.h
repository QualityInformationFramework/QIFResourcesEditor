#pragma once

#include "type_t.CCompositeFeatureDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CRunoutGroupFeatureDefinitionType : public ::qif191::t::CCompositeFeatureDefinitionBaseType
{
public:
	QIF191_EXPORT CRunoutGroupFeatureDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRunoutGroupFeatureDefinitionType(CRunoutGroupFeatureDefinitionType const& init);
	void operator=(CRunoutGroupFeatureDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRunoutGroupFeatureDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRunoutGroupFeatureDefinitionType
