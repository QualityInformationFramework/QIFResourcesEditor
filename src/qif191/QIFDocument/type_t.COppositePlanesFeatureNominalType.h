#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class COppositePlanesFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT COppositePlanesFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositePlanesFeatureNominalType(COppositePlanesFeatureNominalType const& init);
	void operator=(COppositePlanesFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositePlanesFeatureNominalType); }
	MemberElement<t::CPlaneType, _altova_mi_t_altova_COppositePlanesFeatureNominalType_altova_CenterPlane> CenterPlane;
	struct CenterPlane { typedef Iterator<t::CPlaneType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_COppositePlanesFeatureNominalType_altova_LengthVector> LengthVector;
	struct LengthVector { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_COppositePlanesFeatureNominalType_altova_DepthVector> DepthVector;
	struct DepthVector { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_COppositePlanesFeatureNominalType_altova_DraftVector> DraftVector;
	struct DraftVector { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositePlanesFeatureNominalType
