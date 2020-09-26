#pragma once

#include "type_t.CVectorType.h"


namespace qif191
{

namespace t
{	

class CActualVectorType : public ::qif191::t::CVectorType
{
public:
	QIF191_EXPORT CActualVectorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualVectorType(CActualVectorType const& init);
	void operator=(CActualVectorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualVectorType); }
	QIF191_EXPORT void operator=(const string_type& value);

	MemberAttribute<double,_altova_mi_t_altova_CActualVectorType_altova_combinedUncertainty, 0, 0> combinedUncertainty;	// combinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualVectorType_altova_meanError, 0, 0> meanError;	// meanError Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualVectorType_altova_xCombinedUncertainty, 0, 0> xCombinedUncertainty;	// xCombinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualVectorType_altova_xMeanError, 0, 0> xMeanError;	// xMeanError Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualVectorType_altova_yCombinedUncertainty, 0, 0> yCombinedUncertainty;	// yCombinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualVectorType_altova_yMeanError, 0, 0> yMeanError;	// yMeanError Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualVectorType_altova_zCombinedUncertainty, 0, 0> zCombinedUncertainty;	// zCombinedUncertainty Cdecimal

	MemberAttribute<double,_altova_mi_t_altova_CActualVectorType_altova_zMeanError, 0, 0> zMeanError;	// zMeanError Cdecimal
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualVectorType
