#pragma once

#include "type_t.CRunoutCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CCircularRunoutCharacteristicNominalType : public ::qif191::t::CRunoutCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CCircularRunoutCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularRunoutCharacteristicNominalType(CCircularRunoutCharacteristicNominalType const& init);
	void operator=(CCircularRunoutCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularRunoutCharacteristicNominalType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CCircularRunoutCharacteristicNominalType_altova_ZoneDirection> ZoneDirection;
	struct ZoneDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularRunoutCharacteristicNominalType
