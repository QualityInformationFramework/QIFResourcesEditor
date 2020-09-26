#pragma once

#include "type_t.CTopologyBaseType.h"


namespace qif191
{

namespace t
{	

class CLoopBaseType : public ::qif191::t::CTopologyBaseType
{
public:
	QIF191_EXPORT CLoopBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLoopBaseType(CLoopBaseType const& init);
	void operator=(CLoopBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLoopBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLoopBaseType
