#pragma once

#include "type_t.CActionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CMeasureFeatureMethodBaseType : public ::qif191::t::CActionMethodBaseType
{
public:
	QIF191_EXPORT CMeasureFeatureMethodBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasureFeatureMethodBaseType(CMeasureFeatureMethodBaseType const& init);
	void operator=(CMeasureFeatureMethodBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasureFeatureMethodBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasureFeatureMethodBaseType
