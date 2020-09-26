#pragma once

#include "type_t.CLeaderType.h"


namespace qif191
{

namespace t
{	

class CLeaderExtendType : public ::qif191::t::CLeaderType
{
public:
	QIF191_EXPORT CLeaderExtendType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLeaderExtendType(CLeaderExtendType const& init);
	void operator=(CLeaderExtendType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLeaderExtendType); }
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CLeaderExtendType_altova_PointExtension> PointExtension;
	struct PointExtension { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLeaderExtendType
