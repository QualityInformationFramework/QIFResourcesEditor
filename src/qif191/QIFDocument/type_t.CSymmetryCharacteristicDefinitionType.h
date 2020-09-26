#pragma once

#include "type_t.CLocationCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CSymmetryCharacteristicDefinitionType : public ::qif191::t::CLocationCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CSymmetryCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSymmetryCharacteristicDefinitionType(CSymmetryCharacteristicDefinitionType const& init);
	void operator=(CSymmetryCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSymmetryCharacteristicDefinitionType); }
	MemberElement<t::CCompositeSegmentSymmetryDefinitionType, _altova_mi_t_altova_CSymmetryCharacteristicDefinitionType_altova_SecondCompositeSegmentSymmetryDefinition> SecondCompositeSegmentSymmetryDefinition;
	struct SecondCompositeSegmentSymmetryDefinition { typedef Iterator<t::CCompositeSegmentSymmetryDefinitionType> iterator; };
	MemberElement<t::CCompositeSegmentSymmetryDefinitionType, _altova_mi_t_altova_CSymmetryCharacteristicDefinitionType_altova_ThirdCompositeSegmentSymmetryDefinition> ThirdCompositeSegmentSymmetryDefinition;
	struct ThirdCompositeSegmentSymmetryDefinition { typedef Iterator<t::CCompositeSegmentSymmetryDefinitionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSymmetryCharacteristicDefinitionType
