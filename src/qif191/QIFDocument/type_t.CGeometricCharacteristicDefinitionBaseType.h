#pragma once

#include "type_t.CCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CGeometricCharacteristicDefinitionBaseType : public ::qif191::t::CCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CGeometricCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGeometricCharacteristicDefinitionBaseType(CGeometricCharacteristicDefinitionBaseType const& init);
	void operator=(CGeometricCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGeometricCharacteristicDefinitionBaseType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CGeometricCharacteristicDefinitionBaseType_altova_ToleranceValue> ToleranceValue;
	struct ToleranceValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CIntersectionPlaneType, _altova_mi_t_altova_CGeometricCharacteristicDefinitionBaseType_altova_IntersectionPlane> IntersectionPlane;
	struct IntersectionPlane { typedef Iterator<t::CIntersectionPlaneType> iterator; };
	MemberElement<t::COrientationPlaneType, _altova_mi_t_altova_CGeometricCharacteristicDefinitionBaseType_altova_OrientationPlane> OrientationPlane;
	struct OrientationPlane { typedef Iterator<t::COrientationPlaneType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGeometricCharacteristicDefinitionBaseType
