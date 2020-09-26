#pragma once

#include "type_t.CGeometricCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CFormCharacteristicNominalBaseType : public ::qif191::t::CGeometricCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CFormCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFormCharacteristicNominalBaseType(CFormCharacteristicNominalBaseType const& init);
	void operator=(CFormCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFormCharacteristicNominalBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFormCharacteristicNominalBaseType
