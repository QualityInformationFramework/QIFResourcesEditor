#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CPointDefinedSurfaceFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CPointDefinedSurfaceFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedSurfaceFeatureNominalType(CPointDefinedSurfaceFeatureNominalType const& init);
	void operator=(CPointDefinedSurfaceFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedSurfaceFeatureNominalType); }
	MemberElement<t::CTargetPointsNominalType, _altova_mi_t_altova_CPointDefinedSurfaceFeatureNominalType_altova_DefiningPoints> DefiningPoints;
	struct DefiningPoints { typedef Iterator<t::CTargetPointsNominalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedSurfaceFeatureNominalType
