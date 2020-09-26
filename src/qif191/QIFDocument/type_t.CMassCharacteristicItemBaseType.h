#pragma once

#include "type_t.CCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CMassCharacteristicItemBaseType : public ::qif191::t::CCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CMassCharacteristicItemBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMassCharacteristicItemBaseType(CMassCharacteristicItemBaseType const& init);
	void operator=(CMassCharacteristicItemBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMassCharacteristicItemBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMassCharacteristicItemBaseType
