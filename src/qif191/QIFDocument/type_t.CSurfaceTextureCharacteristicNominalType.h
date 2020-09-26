#pragma once

#include "type_t.CCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceTextureCharacteristicNominalType : public ::qif191::t::CCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CSurfaceTextureCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceTextureCharacteristicNominalType(CSurfaceTextureCharacteristicNominalType const& init);
	void operator=(CSurfaceTextureCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceTextureCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceTextureCharacteristicNominalType
