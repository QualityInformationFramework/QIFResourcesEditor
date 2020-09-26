#pragma once

#include "type_t.CThreadSpecificationDetailedBaseType.h"


namespace qif191
{

namespace t
{	

class CSingleLeadThreadSpecificationType : public ::qif191::t::CThreadSpecificationDetailedBaseType
{
public:
	QIF191_EXPORT CSingleLeadThreadSpecificationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSingleLeadThreadSpecificationType(CSingleLeadThreadSpecificationType const& init);
	void operator=(CSingleLeadThreadSpecificationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSingleLeadThreadSpecificationType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CSingleLeadThreadSpecificationType_altova_ThreadDensity> ThreadDensity;
	struct ThreadDensity { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSingleLeadThreadSpecificationType
