#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CCompositeFeatureNominalBaseType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CCompositeFeatureNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeFeatureNominalBaseType(CCompositeFeatureNominalBaseType const& init);
	void operator=(CCompositeFeatureNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeFeatureNominalBaseType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCompositeFeatureNominalBaseType_altova_FeatureNominalIds> FeatureNominalIds;
	struct FeatureNominalIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeFeatureNominalBaseType
