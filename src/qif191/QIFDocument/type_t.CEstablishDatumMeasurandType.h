#pragma once

#include "type_t.CMeasurandBaseType.h"


namespace qif191
{

namespace t
{	

class CEstablishDatumMeasurandType : public ::qif191::t::CMeasurandBaseType
{
public:
	QIF191_EXPORT CEstablishDatumMeasurandType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEstablishDatumMeasurandType(CEstablishDatumMeasurandType const& init);
	void operator=(CEstablishDatumMeasurandType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEstablishDatumMeasurandType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CEstablishDatumMeasurandType_altova_DatumDefinitionId> DatumDefinitionId;
	struct DatumDefinitionId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CEstablishDatumMeasurandType_altova_DatumReferenceFrameId> DatumReferenceFrameId;
	struct DatumReferenceFrameId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEstablishDatumMeasurandType
