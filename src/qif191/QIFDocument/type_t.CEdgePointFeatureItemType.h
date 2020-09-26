#pragma once

#include "type_t.CFeatureItemBaseType.h"


namespace qif191
{

namespace t
{	

class CEdgePointFeatureItemType : public ::qif191::t::CFeatureItemBaseType
{
public:
	QIF191_EXPORT CEdgePointFeatureItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgePointFeatureItemType(CEdgePointFeatureItemType const& init);
	void operator=(CEdgePointFeatureItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgePointFeatureItemType); }
	MemberElement<t::CEdgePointActualDeterminationType, _altova_mi_t_altova_CEdgePointFeatureItemType_altova_DeterminationMode> DeterminationMode;
	struct DeterminationMode { typedef Iterator<t::CEdgePointActualDeterminationType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgePointFeatureItemType
