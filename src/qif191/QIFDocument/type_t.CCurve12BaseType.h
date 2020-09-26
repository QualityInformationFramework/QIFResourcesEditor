#pragma once

#include "type_t.CGeometryBaseType.h"


namespace qif191
{

namespace t
{	

class CCurve12BaseType : public ::qif191::t::CGeometryBaseType
{
public:
	QIF191_EXPORT CCurve12BaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurve12BaseType(CCurve12BaseType const& init);
	void operator=(CCurve12BaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurve12BaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurve12BaseType
