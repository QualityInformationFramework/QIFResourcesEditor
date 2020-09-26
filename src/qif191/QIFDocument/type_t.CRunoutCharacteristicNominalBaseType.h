#pragma once

#include "type_t.CGeometricCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CRunoutCharacteristicNominalBaseType : public ::qif191::t::CGeometricCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CRunoutCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRunoutCharacteristicNominalBaseType(CRunoutCharacteristicNominalBaseType const& init);
	void operator=(CRunoutCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRunoutCharacteristicNominalBaseType); }
	MemberElement<t::CCharacteristicDirectionalZoneLimitType, _altova_mi_t_altova_CRunoutCharacteristicNominalBaseType_altova_ZoneLimit> ZoneLimit;
	struct ZoneLimit { typedef Iterator<t::CCharacteristicDirectionalZoneLimitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRunoutCharacteristicNominalBaseType
