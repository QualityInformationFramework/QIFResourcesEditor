#pragma once

#include "type_t.CGeometricCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CProfileCharacteristicNominalBaseType : public ::qif191::t::CGeometricCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CProfileCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProfileCharacteristicNominalBaseType(CProfileCharacteristicNominalBaseType const& init);
	void operator=(CProfileCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProfileCharacteristicNominalBaseType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CProfileCharacteristicNominalBaseType_altova_TargetValue> TargetValue;
	struct TargetValue { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProfileCharacteristicNominalBaseType
