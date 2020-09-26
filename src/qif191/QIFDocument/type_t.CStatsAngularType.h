#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsAngularType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsAngularType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsAngularType(CStatsAngularType const& init);
	void operator=(CStatsAngularType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsAngularType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsAngularType_altova_angularUnit, 0, 0> angularUnit;	// angularUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsAngularType
