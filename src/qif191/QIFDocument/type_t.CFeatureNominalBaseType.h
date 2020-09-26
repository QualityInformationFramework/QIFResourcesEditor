#pragma once

#include "type_t.CFeatureBaseType.h"


namespace qif191
{

namespace t
{	

class CFeatureNominalBaseType : public ::qif191::t::CFeatureBaseType
{
public:
	QIF191_EXPORT CFeatureNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureNominalBaseType(CFeatureNominalBaseType const& init);
	void operator=(CFeatureNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureNominalBaseType); }
	MemberElement<t::CPointListNominalType, _altova_mi_t_altova_CFeatureNominalBaseType_altova_PointList> PointList;
	struct PointList { typedef Iterator<t::CPointListNominalType> iterator; };
	MemberElement<t::CQIFReferenceType, _altova_mi_t_altova_CFeatureNominalBaseType_altova_FeatureDefinitionId> FeatureDefinitionId;
	struct FeatureDefinitionId { typedef Iterator<t::CQIFReferenceType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CFeatureNominalBaseType_altova_EntityInternalIds> EntityInternalIds;
	struct EntityInternalIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CFeatureNominalBaseType_altova_EntityExternalIds> EntityExternalIds;
	struct EntityExternalIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureNominalBaseType
