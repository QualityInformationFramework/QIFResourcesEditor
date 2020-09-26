#pragma once

#include "type_t.CProfileCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileNonUniformCharacteristicNominalType : public ::qif191::t::CProfileCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicNominalType(CSurfaceProfileNonUniformCharacteristicNominalType const& init);
	void operator=(CSurfaceProfileNonUniformCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileNonUniformCharacteristicNominalType); }
	MemberElement<t::CCharacteristicDirectionalZoneLimitType, _altova_mi_t_altova_CSurfaceProfileNonUniformCharacteristicNominalType_altova_ZoneLimit> ZoneLimit;
	struct ZoneLimit { typedef Iterator<t::CCharacteristicDirectionalZoneLimitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileNonUniformCharacteristicNominalType
