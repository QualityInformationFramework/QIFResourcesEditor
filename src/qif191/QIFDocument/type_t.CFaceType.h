#pragma once

#include "type_t.CFaceBaseType.h"


namespace qif191
{

namespace t
{	

class CFaceType : public ::qif191::t::CFaceBaseType
{
public:
	QIF191_EXPORT CFaceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFaceType(CFaceType const& init);
	void operator=(CFaceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFaceType); }

	MemberAttribute<bool,_altova_mi_t_altova_CFaceType_altova_HasOuter, 0, 0> HasOuter;	// HasOuter Cboolean
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CFaceType_altova_Surface> Surface;
	struct Surface { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CFaceType_altova_LoopIds> LoopIds;
	struct LoopIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFaceType
