#pragma once

#include "type_t.CActionBaseType.h"


namespace qif191
{

namespace t
{	

class CMeasureEvaluateSpecifiedActionType : public ::qif191::t::CActionBaseType
{
public:
	QIF191_EXPORT CMeasureEvaluateSpecifiedActionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasureEvaluateSpecifiedActionType(CMeasureEvaluateSpecifiedActionType const& init);
	void operator=(CMeasureEvaluateSpecifiedActionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasureEvaluateSpecifiedActionType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CMeasureEvaluateSpecifiedActionType_altova_CharacteristicItemIds> CharacteristicItemIds;
	struct CharacteristicItemIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasureEvaluateSpecifiedActionType
