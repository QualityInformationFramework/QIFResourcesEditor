#pragma once

#include "type_t.CProfileCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CLineProfileCharacteristicNominalType : public ::qif191::t::CProfileCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CLineProfileCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineProfileCharacteristicNominalType(CLineProfileCharacteristicNominalType const& init);
	void operator=(CLineProfileCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineProfileCharacteristicNominalType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CLineProfileCharacteristicNominalType_altova_Vector> Vector;
	struct Vector { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CCharacteristicDirectionalZoneLimitType, _altova_mi_t_altova_CLineProfileCharacteristicNominalType_altova_ZoneLimit> ZoneLimit;
	struct ZoneLimit { typedef Iterator<t::CCharacteristicDirectionalZoneLimitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineProfileCharacteristicNominalType
