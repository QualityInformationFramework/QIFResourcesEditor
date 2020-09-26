#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CLineRecompType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CLineRecompType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineRecompType(CLineRecompType const& init);
	void operator=(CLineRecompType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineRecompType); }
	MemberElement<t::CBaseFeaturePointListType, _altova_mi_t_altova_CLineRecompType_altova_BaseFeaturePointList> BaseFeaturePointList;
	struct BaseFeaturePointList { typedef Iterator<t::CBaseFeaturePointListType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineRecompType
