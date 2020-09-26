#pragma once

#include "type_t.CMultipleProductInstanceStudyResultsBaseType.h"


namespace qif191
{

namespace t
{	

class CSimpleStudyResultsType : public ::qif191::t::CMultipleProductInstanceStudyResultsBaseType
{
public:
	QIF191_EXPORT CSimpleStudyResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSimpleStudyResultsType(CSimpleStudyResultsType const& init);
	void operator=(CSimpleStudyResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSimpleStudyResultsType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSimpleStudyResultsType
