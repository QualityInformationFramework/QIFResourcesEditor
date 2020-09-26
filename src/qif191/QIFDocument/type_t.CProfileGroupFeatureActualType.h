#pragma once

#include "type_t.CCompositeFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CProfileGroupFeatureActualType : public ::qif191::t::CCompositeFeatureActualBaseType
{
public:
	QIF191_EXPORT CProfileGroupFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProfileGroupFeatureActualType(CProfileGroupFeatureActualType const& init);
	void operator=(CProfileGroupFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProfileGroupFeatureActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProfileGroupFeatureActualType
