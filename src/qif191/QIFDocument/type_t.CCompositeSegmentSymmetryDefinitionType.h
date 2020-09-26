#pragma once

#include "type_t.CCompositeSegmentDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCompositeSegmentSymmetryDefinitionType : public ::qif191::t::CCompositeSegmentDefinitionBaseType
{
public:
	QIF191_EXPORT CCompositeSegmentSymmetryDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentSymmetryDefinitionType(CCompositeSegmentSymmetryDefinitionType const& init);
	void operator=(CCompositeSegmentSymmetryDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentSymmetryDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentSymmetryDefinitionType
