#pragma once

#include "type_t.CCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceTextureCharacteristicDefinitionType : public ::qif191::t::CCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CSurfaceTextureCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceTextureCharacteristicDefinitionType(CSurfaceTextureCharacteristicDefinitionType const& init);
	void operator=(CSurfaceTextureCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceTextureCharacteristicDefinitionType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CSurfaceTextureCharacteristicDefinitionType_altova_RoughnessAverage> RoughnessAverage;
	struct RoughnessAverage { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceTextureCharacteristicDefinitionType
