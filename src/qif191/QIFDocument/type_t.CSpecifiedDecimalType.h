#pragma once

#include "type_xs.CdecimalType.h"


namespace qif191
{

namespace t
{	

class CSpecifiedDecimalType : public ::qif191::xs::CdecimalType
{
public:
	QIF191_EXPORT CSpecifiedDecimalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpecifiedDecimalType(CSpecifiedDecimalType const& init);
	void operator=(CSpecifiedDecimalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpecifiedDecimalType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CSpecifiedDecimalType_altova_decimalPlaces, 0, 0> decimalPlaces;	// decimalPlaces CnonNegativeInteger

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CSpecifiedDecimalType_altova_significantFigures, 0, 0> significantFigures;	// significantFigures CnonNegativeInteger
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpecifiedDecimalType
