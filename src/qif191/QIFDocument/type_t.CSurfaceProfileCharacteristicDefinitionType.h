#pragma once

#include "type_t.CProfileCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileCharacteristicDefinitionType : public ::qif191::t::CProfileCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileCharacteristicDefinitionType(CSurfaceProfileCharacteristicDefinitionType const& init);
	void operator=(CSurfaceProfileCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileCharacteristicDefinitionType); }
	MemberElement<t::CExtentType, _altova_mi_t_altova_CSurfaceProfileCharacteristicDefinitionType_altova_Extent> Extent;
	struct Extent { typedef Iterator<t::CExtentType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileCharacteristicDefinitionType
