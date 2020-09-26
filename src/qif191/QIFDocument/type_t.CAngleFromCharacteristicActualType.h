#pragma once

#include "type_t.CAngularCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CAngleFromCharacteristicActualType : public ::qif191::t::CAngularCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CAngleFromCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleFromCharacteristicActualType(CAngleFromCharacteristicActualType const& init);
	void operator=(CAngleFromCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleFromCharacteristicActualType); }
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CAngleFromCharacteristicActualType_altova_AnalysisVector> AnalysisVector;
	struct AnalysisVector { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CAngleFromCharacteristicActualType_altova_Vertex> Vertex;
	struct Vertex { typedef Iterator<t::CActualPointType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleFromCharacteristicActualType
