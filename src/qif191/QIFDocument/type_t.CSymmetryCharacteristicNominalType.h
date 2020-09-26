#pragma once

#include "type_t.CLocationCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CSymmetryCharacteristicNominalType : public ::qif191::t::CLocationCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CSymmetryCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSymmetryCharacteristicNominalType(CSymmetryCharacteristicNominalType const& init);
	void operator=(CSymmetryCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSymmetryCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSymmetryCharacteristicNominalType
