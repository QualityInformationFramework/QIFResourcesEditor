#pragma once

#include "type_t.CActualDecimalType.h"


namespace qif191
{

namespace t
{	

class CActualUserDefinedUnitValueType : public ::qif191::t::CActualDecimalType
{
public:
	QIF191_EXPORT CActualUserDefinedUnitValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualUserDefinedUnitValueType(CActualUserDefinedUnitValueType const& init);
	void operator=(CActualUserDefinedUnitValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualUserDefinedUnitValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CActualUserDefinedUnitValueType_altova_unitName, 0, 0> unitName;	// unitName Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualUserDefinedUnitValueType
