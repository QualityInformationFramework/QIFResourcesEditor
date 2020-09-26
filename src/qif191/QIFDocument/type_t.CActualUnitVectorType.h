#pragma once

#include "type_t.CUnitVectorType.h"


namespace qif191
{

namespace t
{	

class CActualUnitVectorType : public ::qif191::t::CUnitVectorType
{
public:
	QIF191_EXPORT CActualUnitVectorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualUnitVectorType(CActualUnitVectorType const& init);
	void operator=(CActualUnitVectorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualUnitVectorType); }
	QIF191_EXPORT void operator=(const string_type& value);

	MemberAttribute<double,_altova_mi_t_altova_CActualUnitVectorType_altova_combinedUncertainty, 0, 0> combinedUncertainty;	// combinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualUnitVectorType_altova_meanError, 0, 0> meanError;	// meanError Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualUnitVectorType_altova_xCombinedUncertainty, 0, 0> xCombinedUncertainty;	// xCombinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualUnitVectorType_altova_xMeanError, 0, 0> xMeanError;	// xMeanError Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualUnitVectorType_altova_yCombinedUncertainty, 0, 0> yCombinedUncertainty;	// yCombinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualUnitVectorType_altova_yMeanError, 0, 0> yMeanError;	// yMeanError Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualUnitVectorType_altova_zCombinedUncertainty, 0, 0> zCombinedUncertainty;	// zCombinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualUnitVectorType_altova_zMeanError, 0, 0> zMeanError;	// zMeanError Cdecimal
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualUnitVectorType
