#pragma once

#include "type_t.CPlanElementBaseType.h"


namespace qif191
{

namespace t
{	

class CActionGroupBaseType : public ::qif191::t::CPlanElementBaseType
{
public:
	QIF191_EXPORT CActionGroupBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActionGroupBaseType(CActionGroupBaseType const& init);
	void operator=(CActionGroupBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActionGroupBaseType); }
	MemberElement<t::CMeasureActionGroupFunctionType, _altova_mi_t_altova_CActionGroupBaseType_altova_MeasureActionGroupFunction> MeasureActionGroupFunction;
	struct MeasureActionGroupFunction { typedef Iterator<t::CMeasureActionGroupFunctionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActionGroupBaseType
