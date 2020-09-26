#pragma once

#include "type_t.CSensorType.h"


namespace qif191
{

namespace t
{	

class CTouchProbeType : public ::qif191::t::CSensorType
{
public:
	QIF191_EXPORT CTouchProbeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTouchProbeType(CTouchProbeType const& init);
	void operator=(CTouchProbeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTouchProbeType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CTouchProbeType_altova_TipDiameter> TipDiameter;
	struct TipDiameter { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTouchProbeType
