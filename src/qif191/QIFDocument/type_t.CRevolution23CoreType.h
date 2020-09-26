#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CRevolution23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT CRevolution23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRevolution23CoreType(CRevolution23CoreType const& init);
	void operator=(CRevolution23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRevolution23CoreType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CRevolution23CoreType_altova_Angle, 0, 0> Angle;	// Angle CParameterRangeType
	MemberElement<t::CAxisType, _altova_mi_t_altova_CRevolution23CoreType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CAxisType> iterator; };
	MemberElement<t::CCurve13CoreType, _altova_mi_t_altova_CRevolution23CoreType_altova_Generatrix> Generatrix;
	struct Generatrix { typedef Iterator<t::CCurve13CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRevolution23CoreType
