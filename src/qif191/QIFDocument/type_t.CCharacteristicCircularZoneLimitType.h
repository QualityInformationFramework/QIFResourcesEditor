#pragma once

#include "type_t.CCircleType.h"


namespace qif191
{

namespace t
{	

class CCharacteristicCircularZoneLimitType : public ::qif191::t::CCircleType
{
public:
	QIF191_EXPORT CCharacteristicCircularZoneLimitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicCircularZoneLimitType(CCharacteristicCircularZoneLimitType const& init);
	void operator=(CCharacteristicCircularZoneLimitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicCircularZoneLimitType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicCircularZoneLimitType
