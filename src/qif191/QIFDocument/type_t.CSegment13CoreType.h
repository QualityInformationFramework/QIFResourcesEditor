#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CSegment13CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CSegment13CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSegment13CoreType(CSegment13CoreType const& init);
	void operator=(CSegment13CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSegment13CoreType); }
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CSegment13CoreType_altova_StartPoint> StartPoint;
	struct StartPoint { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CSegment13CoreType_altova_EndPoint> EndPoint;
	struct EndPoint { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSegment13CoreType
