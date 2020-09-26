#pragma once

#include "type_t.CCurve13BaseType.h"


namespace qif191
{

namespace t
{	

class CAggregate13Type : public ::qif191::t::CCurve13BaseType
{
public:
	QIF191_EXPORT CAggregate13Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAggregate13Type(CAggregate13Type const& init);
	void operator=(CAggregate13Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAggregate13Type); }
	MemberElement<t::CAggregate13CoreType, _altova_mi_t_altova_CAggregate13Type_altova_Aggregate13Core> Aggregate13Core;
	struct Aggregate13Core { typedef Iterator<t::CAggregate13CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CAggregate13Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAggregate13Type
