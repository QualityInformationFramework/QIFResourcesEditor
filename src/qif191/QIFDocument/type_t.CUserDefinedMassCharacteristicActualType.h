#pragma once

#include "type_t.CMassCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedMassCharacteristicActualType : public ::qif191::t::CMassCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CUserDefinedMassCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedMassCharacteristicActualType(CUserDefinedMassCharacteristicActualType const& init);
	void operator=(CUserDefinedMassCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedMassCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedMassCharacteristicActualType
