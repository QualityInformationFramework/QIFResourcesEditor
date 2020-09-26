#pragma once

#include "type_t.CGeometricCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class COrientationCharacteristicActualBaseType : public ::qif191::t::CGeometricCharacteristicActualBaseType
{
public:
	QIF191_EXPORT COrientationCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientationCharacteristicActualBaseType(COrientationCharacteristicActualBaseType const& init);
	void operator=(COrientationCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COrientationCharacteristicActualBaseType); }
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_COrientationCharacteristicActualBaseType_altova_DatumsOk> DatumsOk;
	struct DatumsOk { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_COrientationCharacteristicActualBaseType_altova_Bonus> Bonus;
	struct Bonus { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_COrientationCharacteristicActualBaseType_altova_ReferenceLength> ReferenceLength;
	struct ReferenceLength { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_COrientationCharacteristicActualBaseType_altova_DRFTransformActualId> DRFTransformActualId;
	struct DRFTransformActualId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientationCharacteristicActualBaseType
