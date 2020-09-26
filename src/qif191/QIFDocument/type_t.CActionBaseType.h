#pragma once

#include "type_t.CPlanElementBaseType.h"


namespace qif191
{

namespace t
{	

class CActionBaseType : public ::qif191::t::CPlanElementBaseType
{
public:
	QIF191_EXPORT CActionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActionBaseType(CActionBaseType const& init);
	void operator=(CActionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActionBaseType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CActionBaseType_altova_PreferredActionMethodId> PreferredActionMethodId;
	struct PreferredActionMethodId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CActionBaseType_altova_AlternativeActionMethodIds> AlternativeActionMethodIds;
	struct AlternativeActionMethodIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CActionBaseType_altova_PreferredResourceIds> PreferredResourceIds;
	struct PreferredResourceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActionBaseType
