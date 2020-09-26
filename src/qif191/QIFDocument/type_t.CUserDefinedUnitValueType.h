#pragma once

#include "type_t.CSpecifiedDecimalType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedUnitValueType : public ::qif191::t::CSpecifiedDecimalType
{
public:
	QIF191_EXPORT CUserDefinedUnitValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedUnitValueType(CUserDefinedUnitValueType const& init);
	void operator=(CUserDefinedUnitValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedUnitValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CUserDefinedUnitValueType_altova_unitName, 0, 0> unitName;	// unitName Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedUnitValueType
