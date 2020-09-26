#pragma once

#include "type_t.CLocationCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CPositionCharacteristicActualType : public ::qif191::t::CLocationCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CPositionCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositionCharacteristicActualType(CPositionCharacteristicActualType const& init);
	void operator=(CPositionCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPositionCharacteristicActualType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CPositionCharacteristicActualType_altova_DRFTransformActualId> DRFTransformActualId;
	struct DRFTransformActualId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CCompositeSegmentPositionActualType, _altova_mi_t_altova_CPositionCharacteristicActualType_altova_SecondCompositeSegmentPositionActual> SecondCompositeSegmentPositionActual;
	struct SecondCompositeSegmentPositionActual { typedef Iterator<t::CCompositeSegmentPositionActualType> iterator; };
	MemberElement<t::CCompositeSegmentPositionActualType, _altova_mi_t_altova_CPositionCharacteristicActualType_altova_ThirdCompositeSegmentPositionActual> ThirdCompositeSegmentPositionActual;
	struct ThirdCompositeSegmentPositionActual { typedef Iterator<t::CCompositeSegmentPositionActualType> iterator; };
	MemberElement<t::CCompositeSegmentPositionActualType, _altova_mi_t_altova_CPositionCharacteristicActualType_altova_FourthCompositeSegmentPositionActual> FourthCompositeSegmentPositionActual;
	struct FourthCompositeSegmentPositionActual { typedef Iterator<t::CCompositeSegmentPositionActualType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositionCharacteristicActualType
