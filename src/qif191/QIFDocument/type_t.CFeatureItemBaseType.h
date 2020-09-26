#pragma once

#include "type_t.CFeatureBaseType.h"


namespace qif191
{

namespace t
{	

class CFeatureItemBaseType : public ::qif191::t::CFeatureBaseType
{
public:
	QIF191_EXPORT CFeatureItemBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureItemBaseType(CFeatureItemBaseType const& init);
	void operator=(CFeatureItemBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureItemBaseType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CFeatureItemBaseType_altova_FeatureNominalId> FeatureNominalId;
	struct FeatureNominalId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CFeatureItemBaseType_altova_ParentFeatureItemId> ParentFeatureItemId;
	struct ParentFeatureItemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CFeatureItemBaseType_altova_FeatureName> FeatureName;
	struct FeatureName { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<t::CQPIdTypeType, _altova_mi_t_altova_CFeatureItemBaseType_altova_QPId> QPId;
	struct QPId { typedef Iterator<t::CQPIdTypeType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CFeatureItemBaseType_altova_NotableEventIds> NotableEventIds;
	struct NotableEventIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CFeatureItemBaseType_altova_CoordinateSystemId> CoordinateSystemId;
	struct CoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureItemBaseType
