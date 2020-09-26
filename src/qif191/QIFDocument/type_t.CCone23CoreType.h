#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CCone23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT CCone23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCone23CoreType(CCone23CoreType const& init);
	void operator=(CCone23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCone23CoreType); }

	MemberAttribute<bool,_altova_mi_t_altova_CCone23CoreType_altova_TurnedV, 0, 0> TurnedV;	// TurnedV Cboolean

	MemberAttribute<double,_altova_mi_t_altova_CCone23CoreType_altova_ScaleV, 0, 0> ScaleV;	// ScaleV CDoublePositiveType
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CCone23CoreType_altova_DiameterBottom> DiameterBottom;
	struct DiameterBottom { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CCone23CoreType_altova_DiameterTop> DiameterTop;
	struct DiameterTop { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CCone23CoreType_altova_Length> Length;
	struct Length { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<t::CAxisType, _altova_mi_t_altova_CCone23CoreType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CAxisType> iterator; };
	MemberElement<t::CSweepType, _altova_mi_t_altova_CCone23CoreType_altova_Sweep> Sweep;
	struct Sweep { typedef Iterator<t::CSweepType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCone23CoreType
