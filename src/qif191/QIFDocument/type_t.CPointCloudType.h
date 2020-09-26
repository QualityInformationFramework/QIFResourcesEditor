#pragma once

#include "type_t.CTopologyBaseType.h"


namespace qif191
{

namespace t
{	

class CPointCloudType : public ::qif191::t::CTopologyBaseType
{
public:
	QIF191_EXPORT CPointCloudType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointCloudType(CPointCloudType const& init);
	void operator=(CPointCloudType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointCloudType); }
	MemberElement<t::CArrayPointType, _altova_mi_t_altova_CPointCloudType_altova_Points> Points;
	struct Points { typedef Iterator<t::CArrayPointType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CPointCloudType_altova_PointsBinary> PointsBinary;
	struct PointsBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayUnitVectorType, _altova_mi_t_altova_CPointCloudType_altova_Normals> Normals;
	struct Normals { typedef Iterator<t::CArrayUnitVectorType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CPointCloudType_altova_NormalsBinary> NormalsBinary;
	struct NormalsBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayIntType, _altova_mi_t_altova_CPointCloudType_altova_PointsVisible> PointsVisible;
	struct PointsVisible { typedef Iterator<t::CArrayIntType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CPointCloudType_altova_PointsVisibleBinary> PointsVisibleBinary;
	struct PointsVisibleBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayIntType, _altova_mi_t_altova_CPointCloudType_altova_PointsHidden> PointsHidden;
	struct PointsHidden { typedef Iterator<t::CArrayIntType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CPointCloudType_altova_PointsHiddenBinary> PointsHiddenBinary;
	struct PointsHiddenBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayUnsignedByteType, _altova_mi_t_altova_CPointCloudType_altova_PointsColor> PointsColor;
	struct PointsColor { typedef Iterator<t::CArrayUnsignedByteType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CPointCloudType_altova_PointsColorBinary> PointsColorBinary;
	struct PointsColorBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointCloudType
