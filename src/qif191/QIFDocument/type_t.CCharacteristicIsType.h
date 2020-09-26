#pragma once

#include "type_t.CBooleanExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CCharacteristicIsType : public ::qif191::t::CBooleanExpressionBaseType
{
public:
	QIF191_EXPORT CCharacteristicIsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicIsType(CCharacteristicIsType const& init);
	void operator=(CCharacteristicIsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicIsType); }
	MemberAttribute<string_type,_altova_mi_t_altova_CCharacteristicIsType_altova_val, 1, 34> val;	// val CCharacteristicTypeEnumType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicIsType
