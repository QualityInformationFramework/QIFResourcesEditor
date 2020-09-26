#pragma once

#include "type_t.CLeaderDoubleHeadType.h"


namespace qif191
{

namespace t
{	

class CLeaderDoubleHeadExtendType : public ::qif191::t::CLeaderDoubleHeadType
{
public:
	QIF191_EXPORT CLeaderDoubleHeadExtendType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLeaderDoubleHeadExtendType(CLeaderDoubleHeadExtendType const& init);
	void operator=(CLeaderDoubleHeadExtendType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLeaderDoubleHeadExtendType); }
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CLeaderDoubleHeadExtendType_altova_PointExtension> PointExtension;
	struct PointExtension { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLeaderDoubleHeadExtendType
