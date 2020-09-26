#pragma once

#include "type_t.CDimensionalCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CCoordinateCharacteristicNominalBaseType : public ::qif191::t::CDimensionalCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CCoordinateCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateCharacteristicNominalBaseType(CCoordinateCharacteristicNominalBaseType const& init);
	void operator=(CCoordinateCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateCharacteristicNominalBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateCharacteristicNominalBaseType
