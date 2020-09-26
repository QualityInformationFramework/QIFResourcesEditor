#pragma once

#include "type_t.CLineSegment2dType.h"


namespace qif191
{

namespace t
{	

class CLeaderType : public ::qif191::t::CLineSegment2dType
{
public:
	QIF191_EXPORT CLeaderType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLeaderType(CLeaderType const& init);
	void operator=(CLeaderType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLeaderType); }
	MemberElement<t::CLeaderHeadFormEnumTypeType, _altova_mi_t_altova_CLeaderType_altova_HeadForm> HeadForm;
	struct HeadForm { typedef Iterator<t::CLeaderHeadFormEnumTypeType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CLeaderType_altova_HeadHeight> HeadHeight;
	struct HeadHeight { typedef Iterator<xs::CdoubleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLeaderType
