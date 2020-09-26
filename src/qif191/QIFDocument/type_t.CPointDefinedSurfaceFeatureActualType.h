#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CPointDefinedSurfaceFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CPointDefinedSurfaceFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedSurfaceFeatureActualType(CPointDefinedSurfaceFeatureActualType const& init);
	void operator=(CPointDefinedSurfaceFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedSurfaceFeatureActualType); }
	MemberElement<t::CTargetPointsActualType, _altova_mi_t_altova_CPointDefinedSurfaceFeatureActualType_altova_DefiningPoints> DefiningPoints;
	struct DefiningPoints { typedef Iterator<t::CTargetPointsActualType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CPointDefinedSurfaceFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedSurfaceFeatureActualType
