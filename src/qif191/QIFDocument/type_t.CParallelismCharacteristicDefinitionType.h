#pragma once

#include "type_t.COrientationCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CParallelismCharacteristicDefinitionType : public ::qif191::t::COrientationCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CParallelismCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CParallelismCharacteristicDefinitionType(CParallelismCharacteristicDefinitionType const& init);
	void operator=(CParallelismCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CParallelismCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CParallelismCharacteristicDefinitionType
