#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CCone23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CCone23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCone23Type(CCone23Type const& init);
	void operator=(CCone23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCone23Type); }
	MemberElement<t::CCone23CoreType, _altova_mi_t_altova_CCone23Type_altova_Cone23Core> Cone23Core;
	struct Cone23Core { typedef Iterator<t::CCone23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CCone23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCone23Type
