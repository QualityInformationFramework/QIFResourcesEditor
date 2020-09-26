#pragma once

#include "type_t.CGeometricCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CProfileCharacteristicItemBaseType : public ::qif191::t::CGeometricCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CProfileCharacteristicItemBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProfileCharacteristicItemBaseType(CProfileCharacteristicItemBaseType const& init);
	void operator=(CProfileCharacteristicItemBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProfileCharacteristicItemBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProfileCharacteristicItemBaseType
