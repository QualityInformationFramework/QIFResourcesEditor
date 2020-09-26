#pragma once

#include "type_t.CCharacteristicGroupType.h"


namespace qif191
{

namespace t
{	

class CCharacteristicSimultaneityGroupType : public ::qif191::t::CCharacteristicGroupType
{
public:
	QIF191_EXPORT CCharacteristicSimultaneityGroupType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicSimultaneityGroupType(CCharacteristicSimultaneityGroupType const& init);
	void operator=(CCharacteristicSimultaneityGroupType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicSimultaneityGroupType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicSimultaneityGroupType
