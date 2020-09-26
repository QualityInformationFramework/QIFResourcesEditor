#pragma once

#include "type_t.CGeometricCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CProfileCharacteristicActualBaseType : public ::qif191::t::CGeometricCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CProfileCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProfileCharacteristicActualBaseType(CProfileCharacteristicActualBaseType const& init);
	void operator=(CProfileCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProfileCharacteristicActualBaseType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CProfileCharacteristicActualBaseType_altova_WorstPositiveDeviation> WorstPositiveDeviation;
	struct WorstPositiveDeviation { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CProfileCharacteristicActualBaseType_altova_WorstNegativeDeviation> WorstNegativeDeviation;
	struct WorstNegativeDeviation { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CPointDeviationsType, _altova_mi_t_altova_CProfileCharacteristicActualBaseType_altova_PointDeviations> PointDeviations;
	struct PointDeviations { typedef Iterator<t::CPointDeviationsType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CProfileCharacteristicActualBaseType_altova_DatumsOk> DatumsOk;
	struct DatumsOk { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CProfileCharacteristicActualBaseType_altova_DRFTransformActualId> DRFTransformActualId;
	struct DRFTransformActualId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CCompositeSegmentProfileActualType, _altova_mi_t_altova_CProfileCharacteristicActualBaseType_altova_SecondCompositeSegmentProfileActual> SecondCompositeSegmentProfileActual;
	struct SecondCompositeSegmentProfileActual { typedef Iterator<t::CCompositeSegmentProfileActualType> iterator; };
	MemberElement<t::CCompositeSegmentProfileActualType, _altova_mi_t_altova_CProfileCharacteristicActualBaseType_altova_ThirdCompositeSegmentProfileActual> ThirdCompositeSegmentProfileActual;
	struct ThirdCompositeSegmentProfileActual { typedef Iterator<t::CCompositeSegmentProfileActualType> iterator; };
	MemberElement<t::CCompositeSegmentProfileActualType, _altova_mi_t_altova_CProfileCharacteristicActualBaseType_altova_FourthCompositeSegmentProfileActual> FourthCompositeSegmentProfileActual;
	struct FourthCompositeSegmentProfileActual { typedef Iterator<t::CCompositeSegmentProfileActualType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProfileCharacteristicActualBaseType
