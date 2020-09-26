#pragma once

#include "type_t.CSpecifiedDecimalType.h"


namespace qif191
{

namespace t
{	

class CActualDecimalType : public ::qif191::t::CSpecifiedDecimalType
{
public:
	QIF191_EXPORT CActualDecimalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualDecimalType(CActualDecimalType const& init);
	void operator=(CActualDecimalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualDecimalType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<double,_altova_mi_t_altova_CActualDecimalType_altova_combinedUncertainty, 0, 0> combinedUncertainty;	// combinedUncertainty CNonNegativeDecimalType

	MemberAttribute<double,_altova_mi_t_altova_CActualDecimalType_altova_meanError, 0, 0> meanError;	// meanError CNonNegativeDecimalType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualDecimalType
