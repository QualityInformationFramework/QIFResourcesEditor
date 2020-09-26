#pragma once

#include "type_t.CPlaneType.h"


namespace qif191
{

namespace t
{	

class CPlaneXType : public ::qif191::t::CPlaneType
{
public:
	QIF191_EXPORT CPlaneXType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneXType(CPlaneXType const& init);
	void operator=(CPlaneXType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneXType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPlaneXType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneXType
