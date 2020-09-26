#pragma once

#include "type_t.CProfileCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileNonUniformCharacteristicDefinitionType : public ::qif191::t::CProfileCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicDefinitionType(CSurfaceProfileNonUniformCharacteristicDefinitionType const& init);
	void operator=(CSurfaceProfileNonUniformCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileNonUniformCharacteristicDefinitionType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CSurfaceProfileNonUniformCharacteristicDefinitionType_altova_ToPointToleranceValue> ToPointToleranceValue;
	struct ToPointToleranceValue { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileNonUniformCharacteristicDefinitionType
