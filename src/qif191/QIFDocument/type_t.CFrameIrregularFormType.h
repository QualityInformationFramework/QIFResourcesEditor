#pragma once

#include "type_t.CFrameType.h"


namespace qif191
{

namespace t
{	

class CFrameIrregularFormType : public ::qif191::t::CFrameType
{
public:
	QIF191_EXPORT CFrameIrregularFormType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFrameIrregularFormType(CFrameIrregularFormType const& init);
	void operator=(CFrameIrregularFormType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFrameIrregularFormType); }
	MemberElement<t::CArrayPoint2dType, _altova_mi_t_altova_CFrameIrregularFormType_altova_Points> Points;
	struct Points { typedef Iterator<t::CArrayPoint2dType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFrameIrregularFormType
