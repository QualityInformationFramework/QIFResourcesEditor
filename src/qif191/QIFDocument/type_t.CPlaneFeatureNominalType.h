#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CPlaneFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CPlaneFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneFeatureNominalType(CPlaneFeatureNominalType const& init);
	void operator=(CPlaneFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneFeatureNominalType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CPlaneFeatureNominalType_altova_Location> Location;
	struct Location { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPlaneFeatureNominalType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CPolyLineType, _altova_mi_t_altova_CPlaneFeatureNominalType_altova_PolyLine> PolyLine;
	struct PolyLine { typedef Iterator<t::CPolyLineType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneFeatureNominalType
