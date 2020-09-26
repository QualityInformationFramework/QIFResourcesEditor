#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CLineFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CLineFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineFeatureNominalType(CLineFeatureNominalType const& init);
	void operator=(CLineFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineFeatureNominalType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CLineFeatureNominalType_altova_Location> Location;
	struct Location { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CLineFeatureNominalType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CLineFeatureNominalType_altova_Length> Length;
	struct Length { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CLineFeatureNominalType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineFeatureNominalType
