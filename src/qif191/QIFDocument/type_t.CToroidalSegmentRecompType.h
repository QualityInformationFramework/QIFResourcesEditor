#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CToroidalSegmentRecompType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CToroidalSegmentRecompType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToroidalSegmentRecompType(CToroidalSegmentRecompType const& init);
	void operator=(CToroidalSegmentRecompType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToroidalSegmentRecompType); }
	MemberElement<t::CBaseFeaturePointListType, _altova_mi_t_altova_CToroidalSegmentRecompType_altova_BaseFeaturePointList> BaseFeaturePointList;
	struct BaseFeaturePointList { typedef Iterator<t::CBaseFeaturePointListType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToroidalSegmentRecompType
