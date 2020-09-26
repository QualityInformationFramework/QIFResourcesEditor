#pragma once

#include "type_t.CAreaCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAreaCharacteristicNominalType : public ::qif191::t::CAreaCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CUserDefinedAreaCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAreaCharacteristicNominalType(CUserDefinedAreaCharacteristicNominalType const& init);
	void operator=(CUserDefinedAreaCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAreaCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAreaCharacteristicNominalType
