#pragma once

#include "type_t.CCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CThreadCharacteristicActualType : public ::qif191::t::CCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CThreadCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadCharacteristicActualType(CThreadCharacteristicActualType const& init);
	void operator=(CThreadCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadCharacteristicActualType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CThreadCharacteristicActualType_altova_PitchDiameter> PitchDiameter;
	struct PitchDiameter { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CThreadCharacteristicActualType_altova_FunctionalSize> FunctionalSize;
	struct FunctionalSize { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadCharacteristicActualType
