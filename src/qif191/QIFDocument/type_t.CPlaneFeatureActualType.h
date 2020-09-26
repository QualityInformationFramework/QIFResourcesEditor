#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CPlaneFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CPlaneFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneFeatureActualType(CPlaneFeatureActualType const& init);
	void operator=(CPlaneFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneFeatureActualType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CPlaneFeatureActualType_altova_Location> Location;
	struct Location { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CPlaneFeatureActualType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CPolyLineType, _altova_mi_t_altova_CPlaneFeatureActualType_altova_PolyLine> PolyLine;
	struct PolyLine { typedef Iterator<t::CPolyLineType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CPlaneFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneFeatureActualType
