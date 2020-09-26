#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CGenericFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CGenericFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGenericFeatureNominalType(CGenericFeatureNominalType const& init);
	void operator=(CGenericFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGenericFeatureNominalType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CGenericFeatureNominalType_altova_Location> Location;
	struct Location { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CGenericFeatureNominalType_altova_ReferenceFeatureNominalId> ReferenceFeatureNominalId;
	struct ReferenceFeatureNominalId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGenericFeatureNominalType
