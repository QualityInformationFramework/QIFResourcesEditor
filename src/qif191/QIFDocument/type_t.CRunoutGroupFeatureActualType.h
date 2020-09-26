#pragma once

#include "type_t.CCompositeFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CRunoutGroupFeatureActualType : public ::qif191::t::CCompositeFeatureActualBaseType
{
public:
	QIF191_EXPORT CRunoutGroupFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRunoutGroupFeatureActualType(CRunoutGroupFeatureActualType const& init);
	void operator=(CRunoutGroupFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRunoutGroupFeatureActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRunoutGroupFeatureActualType
