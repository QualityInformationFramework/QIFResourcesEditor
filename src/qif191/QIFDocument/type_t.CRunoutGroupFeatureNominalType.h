#pragma once

#include "type_t.CCompositeFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CRunoutGroupFeatureNominalType : public ::qif191::t::CCompositeFeatureNominalBaseType
{
public:
	QIF191_EXPORT CRunoutGroupFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRunoutGroupFeatureNominalType(CRunoutGroupFeatureNominalType const& init);
	void operator=(CRunoutGroupFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRunoutGroupFeatureNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRunoutGroupFeatureNominalType
