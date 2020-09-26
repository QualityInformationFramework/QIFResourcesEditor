#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CEllipseFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CEllipseFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipseFeatureNominalType(CEllipseFeatureNominalType const& init);
	void operator=(CEllipseFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipseFeatureNominalType); }
	MemberElement<t::CAxisType, _altova_mi_t_altova_CEllipseFeatureNominalType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CAxisType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CEllipseFeatureNominalType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipseFeatureNominalType
