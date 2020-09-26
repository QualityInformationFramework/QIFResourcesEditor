#pragma once

#include "type_t.CStatsWithTolNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsWithTolForceType : public ::qif191::t::CStatsWithTolNumericalBaseType
{
public:
	QIF191_EXPORT CStatsWithTolForceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsWithTolForceType(CStatsWithTolForceType const& init);
	void operator=(CStatsWithTolForceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsWithTolForceType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsWithTolForceType_altova_forceUnit, 0, 0> forceUnit;	// forceUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsWithTolForceType
