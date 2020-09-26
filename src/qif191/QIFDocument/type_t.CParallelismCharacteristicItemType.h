#pragma once

#include "type_t.COrientationCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CParallelismCharacteristicItemType : public ::qif191::t::COrientationCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CParallelismCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CParallelismCharacteristicItemType(CParallelismCharacteristicItemType const& init);
	void operator=(CParallelismCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CParallelismCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CParallelismCharacteristicItemType
