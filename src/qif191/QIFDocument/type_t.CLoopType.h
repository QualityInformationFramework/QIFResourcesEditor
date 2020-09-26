#pragma once

#include "type_t.CLoopBaseType.h"


namespace qif191
{

namespace t
{	

class CLoopType : public ::qif191::t::CLoopBaseType
{
public:
	QIF191_EXPORT CLoopType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLoopType(CLoopType const& init);
	void operator=(CLoopType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLoopType); }
	MemberAttribute<string_type,_altova_mi_t_altova_CLoopType_altova_Form, 1, 4> Form;	// Form CLoopFormEnumType
	MemberElement<t::CCoEdgesType, _altova_mi_t_altova_CLoopType_altova_CoEdges> CoEdges;
	struct CoEdges { typedef Iterator<t::CCoEdgesType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLoopType
