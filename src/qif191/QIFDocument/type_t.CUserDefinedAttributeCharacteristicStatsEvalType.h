#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAttributeCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedAttributeCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAttributeCharacteristicStatsEvalType(CUserDefinedAttributeCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedAttributeCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAttributeCharacteristicStatsEvalType); }
	MemberElement<t::CStatsPassFailType, _altova_mi_t_altova_CUserDefinedAttributeCharacteristicStatsEvalType_altova_AttributeStats> AttributeStats;
	struct AttributeStats { typedef Iterator<t::CStatsPassFailType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAttributeCharacteristicStatsEvalType
