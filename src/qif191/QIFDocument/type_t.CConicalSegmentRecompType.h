#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CConicalSegmentRecompType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CConicalSegmentRecompType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConicalSegmentRecompType(CConicalSegmentRecompType const& init);
	void operator=(CConicalSegmentRecompType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConicalSegmentRecompType); }
	MemberElement<t::CBaseFeaturePointListType, _altova_mi_t_altova_CConicalSegmentRecompType_altova_BaseFeaturePointList> BaseFeaturePointList;
	struct BaseFeaturePointList { typedef Iterator<t::CBaseFeaturePointListType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConicalSegmentRecompType
