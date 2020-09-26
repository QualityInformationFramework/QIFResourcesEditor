#pragma once

#include "type_t.CDatumFeatureBaseType.h"


namespace qif191
{

namespace t
{	

class CActualDatumFeatureType : public ::qif191::t::CDatumFeatureBaseType
{
public:
	QIF191_EXPORT CActualDatumFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualDatumFeatureType(CActualDatumFeatureType const& init);
	void operator=(CActualDatumFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualDatumFeatureType); }
	MemberElement<t::CMaterialModifierEnumTypeType, _altova_mi_t_altova_CActualDatumFeatureType_altova_MaterialModifier> MaterialModifier;
	struct MaterialModifier { typedef Iterator<t::CMaterialModifierEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualDatumFeatureType
