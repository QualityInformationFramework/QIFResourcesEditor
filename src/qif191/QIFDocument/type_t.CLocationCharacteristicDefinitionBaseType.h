#pragma once

#include "type_t.CGeometricCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CLocationCharacteristicDefinitionBaseType : public ::qif191::t::CGeometricCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CLocationCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLocationCharacteristicDefinitionBaseType(CLocationCharacteristicDefinitionBaseType const& init);
	void operator=(CLocationCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLocationCharacteristicDefinitionBaseType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CLocationCharacteristicDefinitionBaseType_altova_DatumReferenceFrameId> DatumReferenceFrameId;
	struct DatumReferenceFrameId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLocationCharacteristicDefinitionBaseType
