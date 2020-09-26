#pragma once

#include "type_t.CCoordinateCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CLinearCoordinateCharacteristicNominalType : public ::qif191::t::CCoordinateCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CLinearCoordinateCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearCoordinateCharacteristicNominalType(CLinearCoordinateCharacteristicNominalType const& init);
	void operator=(CLinearCoordinateCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearCoordinateCharacteristicNominalType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CLinearCoordinateCharacteristicNominalType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearCoordinateDirectionEnumTypeType, _altova_mi_t_altova_CLinearCoordinateCharacteristicNominalType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CLinearCoordinateDirectionEnumTypeType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CLinearCoordinateCharacteristicNominalType_altova_CoordinateSystemId> CoordinateSystemId;
	struct CoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearCoordinateCharacteristicNominalType
