#pragma once

#include "type_t.CCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceTextureCharacteristicActualType : public ::qif191::t::CCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CSurfaceTextureCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceTextureCharacteristicActualType(CSurfaceTextureCharacteristicActualType const& init);
	void operator=(CSurfaceTextureCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceTextureCharacteristicActualType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CSurfaceTextureCharacteristicActualType_altova_RoughnessAverageValue> RoughnessAverageValue;
	struct RoughnessAverageValue { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceTextureCharacteristicActualType
