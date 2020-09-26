#pragma once

#include "type_t.CCharacteristicGroupType.h"


namespace qif191
{

namespace t
{	

class CCharacteristicManufacturingProcessGroupType : public ::qif191::t::CCharacteristicGroupType
{
public:
	QIF191_EXPORT CCharacteristicManufacturingProcessGroupType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicManufacturingProcessGroupType(CCharacteristicManufacturingProcessGroupType const& init);
	void operator=(CCharacteristicManufacturingProcessGroupType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicManufacturingProcessGroupType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCharacteristicManufacturingProcessGroupType_altova_ManufacturingProcessId> ManufacturingProcessId;
	struct ManufacturingProcessId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicManufacturingProcessGroupType
