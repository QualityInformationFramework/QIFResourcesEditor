#pragma once

#include "type_t.CLocationCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CConcentricityCharacteristicDefinitionType : public ::qif191::t::CLocationCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CConcentricityCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConcentricityCharacteristicDefinitionType(CConcentricityCharacteristicDefinitionType const& init);
	void operator=(CConcentricityCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConcentricityCharacteristicDefinitionType); }
	MemberElement<t::CConcentricityZoneShapeType, _altova_mi_t_altova_CConcentricityCharacteristicDefinitionType_altova_ZoneShape> ZoneShape;
	struct ZoneShape { typedef Iterator<t::CConcentricityZoneShapeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConcentricityCharacteristicDefinitionType
