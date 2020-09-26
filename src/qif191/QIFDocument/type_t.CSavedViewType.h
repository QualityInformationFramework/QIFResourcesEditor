#pragma once

#include "type_t.CCameraBaseType.h"


namespace qif191
{

namespace t
{	

class CSavedViewType : public ::qif191::t::CCameraBaseType
{
public:
	QIF191_EXPORT CSavedViewType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSavedViewType(CSavedViewType const& init);
	void operator=(CSavedViewType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSavedViewType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CSavedViewType_altova_CharacteristicNominalVisibleIds> CharacteristicNominalVisibleIds;
	struct CharacteristicNominalVisibleIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CSavedViewType_altova_CharacteristicNominalHiddenIds> CharacteristicNominalHiddenIds;
	struct CharacteristicNominalHiddenIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CSavedViewType_altova_BodyIds> BodyIds;
	struct BodyIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CSavedViewType_altova_ComponentIds> ComponentIds;
	struct ComponentIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CSavedViewType_altova_PlaneClippingIds> PlaneClippingIds;
	struct PlaneClippingIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSavedViewType
