#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsForceType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsForceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsForceType(CStatsForceType const& init);
	void operator=(CStatsForceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsForceType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsForceType_altova_forceUnit, 0, 0> forceUnit;	// forceUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsForceType
