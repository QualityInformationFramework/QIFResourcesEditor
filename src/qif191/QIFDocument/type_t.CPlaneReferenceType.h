#pragma once

#include "type_t.CAuxiliaryPlaneBaseType.h"


namespace qif191
{

namespace t
{	

class CPlaneReferenceType : public ::qif191::t::CAuxiliaryPlaneBaseType
{
public:
	QIF191_EXPORT CPlaneReferenceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneReferenceType(CPlaneReferenceType const& init);
	void operator=(CPlaneReferenceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneReferenceType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneReferenceType
