#pragma once

#include "type_t.CMassCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedMassCharacteristicNominalType : public ::qif191::t::CMassCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CUserDefinedMassCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedMassCharacteristicNominalType(CUserDefinedMassCharacteristicNominalType const& init);
	void operator=(CUserDefinedMassCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedMassCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedMassCharacteristicNominalType
