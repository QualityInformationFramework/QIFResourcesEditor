#pragma once

#include "type_t.CMeasureFeatureMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CGageMeasureFeatureMethodType : public ::qif191::t::CMeasureFeatureMethodBaseType
{
public:
	QIF191_EXPORT CGageMeasureFeatureMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGageMeasureFeatureMethodType(CGageMeasureFeatureMethodType const& init);
	void operator=(CGageMeasureFeatureMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGageMeasureFeatureMethodType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGageMeasureFeatureMethodType
