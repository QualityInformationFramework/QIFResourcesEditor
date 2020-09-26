#pragma once

#include "type_t.CLocationCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CSymmetryCharacteristicActualType : public ::qif191::t::CLocationCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CSymmetryCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSymmetryCharacteristicActualType(CSymmetryCharacteristicActualType const& init);
	void operator=(CSymmetryCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSymmetryCharacteristicActualType); }
	MemberElement<t::CCompositeSegmentSymmetryActualType, _altova_mi_t_altova_CSymmetryCharacteristicActualType_altova_SecondCompositeSegmentSymmetryActual> SecondCompositeSegmentSymmetryActual;
	struct SecondCompositeSegmentSymmetryActual { typedef Iterator<t::CCompositeSegmentSymmetryActualType> iterator; };
	MemberElement<t::CCompositeSegmentSymmetryActualType, _altova_mi_t_altova_CSymmetryCharacteristicActualType_altova_ThirdCompositeSegmentSymmetryActual> ThirdCompositeSegmentSymmetryActual;
	struct ThirdCompositeSegmentSymmetryActual { typedef Iterator<t::CCompositeSegmentSymmetryActualType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSymmetryCharacteristicActualType
