#pragma once

#include "type_t.CStatsWithTolNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsWithTolAngularType : public ::qif191::t::CStatsWithTolNumericalBaseType
{
public:
	QIF191_EXPORT CStatsWithTolAngularType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsWithTolAngularType(CStatsWithTolAngularType const& init);
	void operator=(CStatsWithTolAngularType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsWithTolAngularType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsWithTolAngularType_altova_angularUnit, 0, 0> angularUnit;	// angularUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsWithTolAngularType
