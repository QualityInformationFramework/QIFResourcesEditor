#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CSpline13CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CSpline13CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpline13CoreType(CSpline13CoreType const& init);
	void operator=(CSpline13CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpline13CoreType); }

	MemberAttribute<bool,_altova_mi_t_altova_CSpline13CoreType_altova_Normalized, 0, 0> Normalized;	// Normalized Cboolean
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CSpline13CoreType_altova_Knots> Knots;
	struct Knots { typedef Iterator<t::CArrayDoubleType> iterator; };
	MemberElement<t::CArrayNaturalType, _altova_mi_t_altova_CSpline13CoreType_altova_Orders> Orders;
	struct Orders { typedef Iterator<t::CArrayNaturalType> iterator; };
	MemberElement<t::CArrayPointType, _altova_mi_t_altova_CSpline13CoreType_altova_Coefficients> Coefficients;
	struct Coefficients { typedef Iterator<t::CArrayPointType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpline13CoreType
