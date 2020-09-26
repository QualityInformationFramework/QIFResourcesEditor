#pragma once

#include "type_t.CCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CTimeCharacteristicNominalBaseType : public ::qif191::t::CCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CTimeCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTimeCharacteristicNominalBaseType(CTimeCharacteristicNominalBaseType const& init);
	void operator=(CTimeCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTimeCharacteristicNominalBaseType); }
	MemberElement<t::CTimeValueType, _altova_mi_t_altova_CTimeCharacteristicNominalBaseType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CTimeValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTimeCharacteristicNominalBaseType
