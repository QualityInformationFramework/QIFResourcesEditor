#pragma once

#include "type_t.CPressureCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedPressureCharacteristicNominalType : public ::qif191::t::CPressureCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CUserDefinedPressureCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedPressureCharacteristicNominalType(CUserDefinedPressureCharacteristicNominalType const& init);
	void operator=(CUserDefinedPressureCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedPressureCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedPressureCharacteristicNominalType
