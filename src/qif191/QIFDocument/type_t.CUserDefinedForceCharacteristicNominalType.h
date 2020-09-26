#pragma once

#include "type_t.CForceCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedForceCharacteristicNominalType : public ::qif191::t::CForceCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CUserDefinedForceCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedForceCharacteristicNominalType(CUserDefinedForceCharacteristicNominalType const& init);
	void operator=(CUserDefinedForceCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedForceCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedForceCharacteristicNominalType
