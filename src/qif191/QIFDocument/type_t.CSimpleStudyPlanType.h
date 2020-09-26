#pragma once

#include "type_t.CMultipleProductInstanceStudyPlanBaseType.h"


namespace qif191
{

namespace t
{	

class CSimpleStudyPlanType : public ::qif191::t::CMultipleProductInstanceStudyPlanBaseType
{
public:
	QIF191_EXPORT CSimpleStudyPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSimpleStudyPlanType(CSimpleStudyPlanType const& init);
	void operator=(CSimpleStudyPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSimpleStudyPlanType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSimpleStudyPlanType
