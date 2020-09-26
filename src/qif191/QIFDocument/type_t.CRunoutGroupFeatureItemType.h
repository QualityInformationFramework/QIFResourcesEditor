#pragma once

#include "type_t.CCompositeFeatureItemBaseType.h"


namespace qif191
{

namespace t
{	

class CRunoutGroupFeatureItemType : public ::qif191::t::CCompositeFeatureItemBaseType
{
public:
	QIF191_EXPORT CRunoutGroupFeatureItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRunoutGroupFeatureItemType(CRunoutGroupFeatureItemType const& init);
	void operator=(CRunoutGroupFeatureItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRunoutGroupFeatureItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRunoutGroupFeatureItemType
