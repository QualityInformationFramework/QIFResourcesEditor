#pragma once

#include "type_t.CQIFReferenceType.h"


namespace qif191
{

namespace t
{	

class CQIFReferenceFullType : public ::qif191::t::CQIFReferenceType
{
public:
	QIF191_EXPORT CQIFReferenceFullType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQIFReferenceFullType(CQIFReferenceFullType const& init);
	void operator=(CQIFReferenceFullType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CQIFReferenceFullType); }
	QIF191_EXPORT void operator=(const unsigned& value);

	MemberAttribute<unsigned,_altova_mi_t_altova_CQIFReferenceFullType_altova_AsmPath, 0, 0> AsmPath;	// AsmPath CQIFIdType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQIFReferenceFullType
