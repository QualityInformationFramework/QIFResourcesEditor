#pragma once

#include "type_t.CCompositeFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CCompoundFeatureNominalType : public ::qif191::t::CCompositeFeatureNominalBaseType
{
public:
	QIF191_EXPORT CCompoundFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompoundFeatureNominalType(CCompoundFeatureNominalType const& init);
	void operator=(CCompoundFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompoundFeatureNominalType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CCompoundFeatureNominalType_altova_Location> Location;
	struct Location { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CCompoundFeatureNominalType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CCompoundFeatureGeometryEnumTypeType, _altova_mi_t_altova_CCompoundFeatureNominalType_altova_CompoundFeatureForm> CompoundFeatureForm;
	struct CompoundFeatureForm { typedef Iterator<t::CCompoundFeatureGeometryEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompoundFeatureNominalType
