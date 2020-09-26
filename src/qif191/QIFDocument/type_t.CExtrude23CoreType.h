#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CExtrude23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT CExtrude23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrude23CoreType(CExtrude23CoreType const& init);
	void operator=(CExtrude23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrude23CoreType); }
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CExtrude23CoreType_altova_TerminationPoint> TerminationPoint;
	struct TerminationPoint { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	MemberElement<t::CCurve13CoreType, _altova_mi_t_altova_CExtrude23CoreType_altova_Curve> Curve;
	struct Curve { typedef Iterator<t::CCurve13CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrude23CoreType
