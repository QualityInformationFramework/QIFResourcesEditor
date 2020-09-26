#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CCylinderFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CCylinderFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylinderFeatureNominalType(CCylinderFeatureNominalType const& init);
	void operator=(CCylinderFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylinderFeatureNominalType); }
	MemberElement<t::CAxisType, _altova_mi_t_altova_CCylinderFeatureNominalType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CAxisType> iterator; };
	MemberElement<t::CSweepType, _altova_mi_t_altova_CCylinderFeatureNominalType_altova_Sweep> Sweep;
	struct Sweep { typedef Iterator<t::CSweepType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylinderFeatureNominalType
