#pragma once

#include "type_t.CCompositeFeatureDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCompoundFeatureDefinitionType : public ::qif191::t::CCompositeFeatureDefinitionBaseType
{
public:
	QIF191_EXPORT CCompoundFeatureDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompoundFeatureDefinitionType(CCompoundFeatureDefinitionType const& init);
	void operator=(CCompoundFeatureDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompoundFeatureDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompoundFeatureDefinitionType
