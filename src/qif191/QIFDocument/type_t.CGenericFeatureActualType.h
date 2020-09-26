#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CGenericFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CGenericFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGenericFeatureActualType(CGenericFeatureActualType const& init);
	void operator=(CGenericFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGenericFeatureActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGenericFeatureActualType
