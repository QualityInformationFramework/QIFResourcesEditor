#pragma once

#include "type_t.CGeometryBaseType.h"


namespace qif191
{

namespace t
{	

class CCurve13BaseType : public ::qif191::t::CGeometryBaseType
{
public:
	QIF191_EXPORT CCurve13BaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurve13BaseType(CCurve13BaseType const& init);
	void operator=(CCurve13BaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurve13BaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurve13BaseType
