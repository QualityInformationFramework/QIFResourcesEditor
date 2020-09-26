#pragma once

#include "type_t.CGeometryBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceBaseType : public ::qif191::t::CGeometryBaseType
{
public:
	QIF191_EXPORT CSurfaceBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceBaseType(CSurfaceBaseType const& init);
	void operator=(CSurfaceBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceBaseType
