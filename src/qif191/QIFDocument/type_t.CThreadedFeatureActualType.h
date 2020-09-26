#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CThreadedFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CThreadedFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadedFeatureActualType(CThreadedFeatureActualType const& init);
	void operator=(CThreadedFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadedFeatureActualType); }
	MemberElement<t::CActualAxisType, _altova_mi_t_altova_CThreadedFeatureActualType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CActualAxisType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CThreadedFeatureActualType_altova_PitchDiameter> PitchDiameter;
	struct PitchDiameter { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CThreadedFeatureActualType_altova_FunctionalSize> FunctionalSize;
	struct FunctionalSize { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CThreadedFeatureActualType_altova_Length> Length;
	struct Length { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadedFeatureActualType
