#pragma once

#include "type_t.CSpeedCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedSpeedCharacteristicNominalType : public ::qif191::t::CSpeedCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CUserDefinedSpeedCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedSpeedCharacteristicNominalType(CUserDefinedSpeedCharacteristicNominalType const& init);
	void operator=(CUserDefinedSpeedCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedSpeedCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedSpeedCharacteristicNominalType
