#pragma once

#include "type_t.CMeasurandBaseType.h"


namespace qif191
{

namespace t
{	

class CEvaluateCharacteristicMeasurandType : public ::qif191::t::CMeasurandBaseType
{
public:
	QIF191_EXPORT CEvaluateCharacteristicMeasurandType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEvaluateCharacteristicMeasurandType(CEvaluateCharacteristicMeasurandType const& init);
	void operator=(CEvaluateCharacteristicMeasurandType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEvaluateCharacteristicMeasurandType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CEvaluateCharacteristicMeasurandType_altova_CharacteristicItemId> CharacteristicItemId;
	struct CharacteristicItemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEvaluateCharacteristicMeasurandType
