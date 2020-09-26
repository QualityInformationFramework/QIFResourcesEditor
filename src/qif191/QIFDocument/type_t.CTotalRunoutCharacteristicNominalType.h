#pragma once

#include "type_t.CRunoutCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CTotalRunoutCharacteristicNominalType : public ::qif191::t::CRunoutCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CTotalRunoutCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTotalRunoutCharacteristicNominalType(CTotalRunoutCharacteristicNominalType const& init);
	void operator=(CTotalRunoutCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTotalRunoutCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTotalRunoutCharacteristicNominalType
