#pragma once

#include "type_t.CMeasurementResourceBaseType.h"


namespace qif191
{

namespace t
{	

class CFixtureType : public ::qif191::t::CMeasurementResourceBaseType
{
public:
	QIF191_EXPORT CFixtureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFixtureType(CFixtureType const& init);
	void operator=(CFixtureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFixtureType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFixtureType
