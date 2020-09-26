#pragma once

#include "type_t.CCurve13BaseType.h"


namespace qif191
{

namespace t
{	

class CNurbs13Type : public ::qif191::t::CCurve13BaseType
{
public:
	QIF191_EXPORT CNurbs13Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNurbs13Type(CNurbs13Type const& init);
	void operator=(CNurbs13Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNurbs13Type); }
	MemberElement<t::CNurbs13CoreType, _altova_mi_t_altova_CNurbs13Type_altova_Nurbs13Core> Nurbs13Core;
	struct Nurbs13Core { typedef Iterator<t::CNurbs13CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CNurbs13Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNurbs13Type
