#pragma once

#include "type_t.CCoordinateCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularCoordinateCharacteristicNominalType : public ::qif191::t::CCoordinateCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CAngularCoordinateCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularCoordinateCharacteristicNominalType(CAngularCoordinateCharacteristicNominalType const& init);
	void operator=(CAngularCoordinateCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularCoordinateCharacteristicNominalType); }
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CAngularCoordinateCharacteristicNominalType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<t::CAngularCoordinateDirectionEnumTypeType, _altova_mi_t_altova_CAngularCoordinateCharacteristicNominalType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CAngularCoordinateDirectionEnumTypeType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CAngularCoordinateCharacteristicNominalType_altova_CoordinateSystemId> CoordinateSystemId;
	struct CoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularCoordinateCharacteristicNominalType
