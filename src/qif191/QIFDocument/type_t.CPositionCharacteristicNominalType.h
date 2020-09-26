#pragma once

#include "type_t.CLocationCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CPositionCharacteristicNominalType : public ::qif191::t::CLocationCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CPositionCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositionCharacteristicNominalType(CPositionCharacteristicNominalType const& init);
	void operator=(CPositionCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPositionCharacteristicNominalType); }
	MemberElement<t::CCharacteristicDirectionalZoneLimitType, _altova_mi_t_altova_CPositionCharacteristicNominalType_altova_ZoneLimit> ZoneLimit;
	struct ZoneLimit { typedef Iterator<t::CCharacteristicDirectionalZoneLimitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositionCharacteristicNominalType
