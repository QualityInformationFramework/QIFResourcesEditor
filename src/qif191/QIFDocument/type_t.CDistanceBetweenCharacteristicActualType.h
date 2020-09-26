#pragma once

#include "type_t.CLinearCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CDistanceBetweenCharacteristicActualType : public ::qif191::t::CLinearCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CDistanceBetweenCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDistanceBetweenCharacteristicActualType(CDistanceBetweenCharacteristicActualType const& init);
	void operator=(CDistanceBetweenCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDistanceBetweenCharacteristicActualType); }
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CDistanceBetweenCharacteristicActualType_altova_AnalysisVector> AnalysisVector;
	struct AnalysisVector { typedef Iterator<t::CActualUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDistanceBetweenCharacteristicActualType
