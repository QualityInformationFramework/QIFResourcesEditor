#pragma once

#include "type_t.CProfileCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CPointProfileCharacteristicNominalType : public ::qif191::t::CProfileCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CPointProfileCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointProfileCharacteristicNominalType(CPointProfileCharacteristicNominalType const& init);
	void operator=(CPointProfileCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointProfileCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointProfileCharacteristicNominalType
