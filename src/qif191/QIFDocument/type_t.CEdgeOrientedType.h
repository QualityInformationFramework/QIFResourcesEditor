#pragma once

#include "type_t.CElementReferenceType.h"


namespace qif191
{

namespace t
{	

class CEdgeOrientedType : public ::qif191::t::CElementReferenceType
{
public:
	QIF191_EXPORT CEdgeOrientedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgeOrientedType(CEdgeOrientedType const& init);
	void operator=(CEdgeOrientedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgeOrientedType); }

	MemberAttribute<bool,_altova_mi_t_altova_CEdgeOrientedType_altova_Turned, 0, 0> Turned;	// Turned Cboolean
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgeOrientedType
