#pragma once

#include "type_t.CLinearCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CWidthCharacteristicNominalType : public ::qif191::t::CLinearCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CWidthCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CWidthCharacteristicNominalType(CWidthCharacteristicNominalType const& init);
	void operator=(CWidthCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CWidthCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CWidthCharacteristicNominalType
