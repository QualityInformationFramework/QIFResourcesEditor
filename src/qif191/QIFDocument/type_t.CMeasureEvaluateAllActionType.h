#pragma once

#include "type_t.CActionBaseType.h"


namespace qif191
{

namespace t
{	

class CMeasureEvaluateAllActionType : public ::qif191::t::CActionBaseType
{
public:
	QIF191_EXPORT CMeasureEvaluateAllActionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasureEvaluateAllActionType(CMeasureEvaluateAllActionType const& init);
	void operator=(CMeasureEvaluateAllActionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasureEvaluateAllActionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasureEvaluateAllActionType
