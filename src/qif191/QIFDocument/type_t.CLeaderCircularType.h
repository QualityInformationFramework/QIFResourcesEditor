#pragma once

#include "type_t.CLeaderType.h"


namespace qif191
{

namespace t
{	

class CLeaderCircularType : public ::qif191::t::CLeaderType
{
public:
	QIF191_EXPORT CLeaderCircularType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLeaderCircularType(CLeaderCircularType const& init);
	void operator=(CLeaderCircularType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLeaderCircularType); }
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CLeaderCircularType_altova_Center> Center;
	struct Center { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLeaderCircularType
