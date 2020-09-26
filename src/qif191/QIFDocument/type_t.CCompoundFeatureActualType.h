#pragma once

#include "type_t.CCompositeFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CCompoundFeatureActualType : public ::qif191::t::CCompositeFeatureActualBaseType
{
public:
	QIF191_EXPORT CCompoundFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompoundFeatureActualType(CCompoundFeatureActualType const& init);
	void operator=(CCompoundFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompoundFeatureActualType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CCompoundFeatureActualType_altova_Location> Location;
	struct Location { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CCompoundFeatureActualType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CActualUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompoundFeatureActualType
