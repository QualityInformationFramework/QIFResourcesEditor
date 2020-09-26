#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsMassType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsMassType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsMassType(CStatsMassType const& init);
	void operator=(CStatsMassType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsMassType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsMassType_altova_massUnit, 0, 0> massUnit;	// massUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsMassType
