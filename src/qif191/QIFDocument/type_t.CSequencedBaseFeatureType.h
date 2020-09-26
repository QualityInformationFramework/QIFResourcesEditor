#pragma once

#include "type_t.CBaseFeatureType.h"


namespace qif191
{

namespace t
{	

class CSequencedBaseFeatureType : public ::qif191::t::CBaseFeatureType
{
public:
	QIF191_EXPORT CSequencedBaseFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSequencedBaseFeatureType(CSequencedBaseFeatureType const& init);
	void operator=(CSequencedBaseFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSequencedBaseFeatureType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CSequencedBaseFeatureType_altova_SequenceNumber> SequenceNumber;
	struct SequenceNumber { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSequencedBaseFeatureType
