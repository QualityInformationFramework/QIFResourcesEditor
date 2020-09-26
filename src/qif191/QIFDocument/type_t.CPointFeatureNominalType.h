#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CPointFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CPointFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointFeatureNominalType(CPointFeatureNominalType const& init);
	void operator=(CPointFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointFeatureNominalType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CPointFeatureNominalType_altova_Location> Location;
	struct Location { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPointFeatureNominalType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointFeatureNominalType
