#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CCuboidFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CCuboidFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCuboidFeatureNominalType(CCuboidFeatureNominalType const& init);
	void operator=(CCuboidFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCuboidFeatureNominalType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CCuboidFeatureNominalType_altova_Location> Location;
	struct Location { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CCuboidFeatureNominalType_altova_LengthVector> LengthVector;
	struct LengthVector { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CCuboidFeatureNominalType_altova_HeightVector> HeightVector;
	struct HeightVector { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCuboidFeatureNominalType
