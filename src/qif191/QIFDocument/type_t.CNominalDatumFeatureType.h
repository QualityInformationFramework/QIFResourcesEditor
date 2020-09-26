#pragma once

#include "type_t.CDatumFeatureBaseType.h"


namespace qif191
{

namespace t
{	

class CNominalDatumFeatureType : public ::qif191::t::CDatumFeatureBaseType
{
public:
	QIF191_EXPORT CNominalDatumFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNominalDatumFeatureType(CNominalDatumFeatureType const& init);
	void operator=(CNominalDatumFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNominalDatumFeatureType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNominalDatumFeatureType
