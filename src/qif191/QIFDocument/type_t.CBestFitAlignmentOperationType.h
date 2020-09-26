#pragma once

#include "type_t.CAlignmentOperationBaseType.h"


namespace qif191
{

namespace t
{	

class CBestFitAlignmentOperationType : public ::qif191::t::CAlignmentOperationBaseType
{
public:
	QIF191_EXPORT CBestFitAlignmentOperationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBestFitAlignmentOperationType(CBestFitAlignmentOperationType const& init);
	void operator=(CBestFitAlignmentOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBestFitAlignmentOperationType); }
	MemberElement<t::CDegreesOfFreedomType, _altova_mi_t_altova_CBestFitAlignmentOperationType_altova_DegreesOfFreedom> DegreesOfFreedom;
	struct DegreesOfFreedom { typedef Iterator<t::CDegreesOfFreedomType> iterator; };
	MemberElement<t::CSequencedBaseFeatureType, _altova_mi_t_altova_CBestFitAlignmentOperationType_altova_BaseFeature> BaseFeature;
	struct BaseFeature { typedef Iterator<t::CSequencedBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBestFitAlignmentOperationType
