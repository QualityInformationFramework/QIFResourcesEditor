#pragma once

#include "type_t.COrientationCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CPerpendicularityCharacteristicNominalType : public ::qif191::t::COrientationCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CPerpendicularityCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPerpendicularityCharacteristicNominalType(CPerpendicularityCharacteristicNominalType const& init);
	void operator=(CPerpendicularityCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPerpendicularityCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPerpendicularityCharacteristicNominalType
