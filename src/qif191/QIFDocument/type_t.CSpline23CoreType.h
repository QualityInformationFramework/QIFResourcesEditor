#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CSpline23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT CSpline23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpline23CoreType(CSpline23CoreType const& init);
	void operator=(CSpline23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpline23CoreType); }

	MemberAttribute<bool,_altova_mi_t_altova_CSpline23CoreType_altova_Normalized, 0, 0> Normalized;	// Normalized Cboolean
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CSpline23CoreType_altova_KnotsU> KnotsU;
	struct KnotsU { typedef Iterator<t::CArrayDoubleType> iterator; };
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CSpline23CoreType_altova_KnotsV> KnotsV;
	struct KnotsV { typedef Iterator<t::CArrayDoubleType> iterator; };
	MemberElement<t::CArrayNaturalType, _altova_mi_t_altova_CSpline23CoreType_altova_OrdersU> OrdersU;
	struct OrdersU { typedef Iterator<t::CArrayNaturalType> iterator; };
	MemberElement<t::CArrayNaturalType, _altova_mi_t_altova_CSpline23CoreType_altova_OrdersV> OrdersV;
	struct OrdersV { typedef Iterator<t::CArrayNaturalType> iterator; };
	MemberElement<t::CArrayPointType, _altova_mi_t_altova_CSpline23CoreType_altova_Coefficients> Coefficients;
	struct Coefficients { typedef Iterator<t::CArrayPointType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpline23CoreType
