#pragma once

#include "type_t.CArrayPointType.h"


namespace qif191
{

namespace t
{	

class CPolyLineType : public ::qif191::t::CArrayPointType
{
public:
	QIF191_EXPORT CPolyLineType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPolyLineType(CPolyLineType const& init);
	void operator=(CPolyLineType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPolyLineType); }
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPolyLineType
