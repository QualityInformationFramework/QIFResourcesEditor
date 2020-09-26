#pragma once

#include "type_t.CCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CMassCharacteristicNominalBaseType : public ::qif191::t::CCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CMassCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMassCharacteristicNominalBaseType(CMassCharacteristicNominalBaseType const& init);
	void operator=(CMassCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMassCharacteristicNominalBaseType); }
	MemberElement<t::CMassValueType, _altova_mi_t_altova_CMassCharacteristicNominalBaseType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CMassValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMassCharacteristicNominalBaseType
