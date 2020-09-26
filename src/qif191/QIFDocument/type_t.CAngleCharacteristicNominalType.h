#pragma once

#include "type_t.CAngularCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CAngleCharacteristicNominalType : public ::qif191::t::CAngularCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CAngleCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleCharacteristicNominalType(CAngleCharacteristicNominalType const& init);
	void operator=(CAngleCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleCharacteristicNominalType
