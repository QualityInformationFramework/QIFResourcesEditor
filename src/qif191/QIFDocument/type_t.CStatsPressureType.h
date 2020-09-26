#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsPressureType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsPressureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsPressureType(CStatsPressureType const& init);
	void operator=(CStatsPressureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsPressureType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsPressureType_altova_pressureUnit, 0, 0> pressureUnit;	// pressureUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsPressureType
