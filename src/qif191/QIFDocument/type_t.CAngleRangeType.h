#pragma once

#include "type_t.CPoint2dSimpleTypeType.h"


namespace qif191
{

namespace t
{	

class CAngleRangeType : public ::qif191::t::CPoint2dSimpleTypeType
{
public:
	QIF191_EXPORT CAngleRangeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleRangeType(CAngleRangeType const& init);
	void operator=(CAngleRangeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleRangeType); }
	QIF191_EXPORT void operator=(const string_type& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CAngleRangeType_altova_angularUnit, 0, 0> angularUnit;	// angularUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleRangeType
