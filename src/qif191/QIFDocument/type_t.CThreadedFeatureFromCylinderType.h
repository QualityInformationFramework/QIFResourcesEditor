#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CThreadedFeatureFromCylinderType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CThreadedFeatureFromCylinderType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadedFeatureFromCylinderType(CThreadedFeatureFromCylinderType const& init);
	void operator=(CThreadedFeatureFromCylinderType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadedFeatureFromCylinderType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CThreadedFeatureFromCylinderType_altova_BaseCylinder> BaseCylinder;
	struct BaseCylinder { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CThreadedFeatureFromCylinderType_altova_Offset> Offset;
	struct Offset { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadedFeatureFromCylinderType
