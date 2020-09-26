#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CCylinder23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT CCylinder23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylinder23CoreType(CCylinder23CoreType const& init);
	void operator=(CCylinder23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylinder23CoreType); }

	MemberAttribute<bool,_altova_mi_t_altova_CCylinder23CoreType_altova_TurnedV, 0, 0> TurnedV;	// TurnedV Cboolean

	MemberAttribute<double,_altova_mi_t_altova_CCylinder23CoreType_altova_ScaleV, 0, 0> ScaleV;	// ScaleV CDoublePositiveType
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CCylinder23CoreType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CCylinder23CoreType_altova_Length> Length;
	struct Length { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<t::CAxisType, _altova_mi_t_altova_CCylinder23CoreType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CAxisType> iterator; };
	MemberElement<t::CSweepType, _altova_mi_t_altova_CCylinder23CoreType_altova_Sweep> Sweep;
	struct Sweep { typedef Iterator<t::CSweepType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylinder23CoreType
