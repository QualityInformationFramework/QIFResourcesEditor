#pragma once

#include "type_t.CFeatureDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CConeFeatureDefinitionType : public ::qif191::t::CFeatureDefinitionBaseType
{
public:
	QIF191_EXPORT CConeFeatureDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConeFeatureDefinitionType(CConeFeatureDefinitionType const& init);
	void operator=(CConeFeatureDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConeFeatureDefinitionType); }
	MemberElement<t::CInternalExternalEnumTypeType, _altova_mi_t_altova_CConeFeatureDefinitionType_altova_InternalExternal> InternalExternal;
	struct InternalExternal { typedef Iterator<t::CInternalExternalEnumTypeType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CConeFeatureDefinitionType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CConeFeatureDefinitionType_altova_ConeDiameterDistance> ConeDiameterDistance;
	struct ConeDiameterDistance { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CConeFeatureDefinitionType_altova_EndLength> EndLength;
	struct EndLength { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CConeFeatureDefinitionType_altova_StartLength> StartLength;
	struct StartLength { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConeFeatureDefinitionType
