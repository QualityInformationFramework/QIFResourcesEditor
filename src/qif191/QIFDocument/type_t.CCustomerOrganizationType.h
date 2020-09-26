#pragma once

#include "type_t.COrganizationType.h"


namespace qif191
{

namespace t
{	

class CCustomerOrganizationType : public ::qif191::t::COrganizationType
{
public:
	QIF191_EXPORT CCustomerOrganizationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCustomerOrganizationType(CCustomerOrganizationType const& init);
	void operator=(CCustomerOrganizationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCustomerOrganizationType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CCustomerOrganizationType_altova_CustomerNumber> CustomerNumber;
	struct CustomerNumber { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCustomerOrganizationType
