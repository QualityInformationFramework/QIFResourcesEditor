#pragma once

#include "type_t.CFeatureDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCylindricalSegmentFeatureDefinitionType : public ::qif191::t::CFeatureDefinitionBaseType
{
public:
	QIF191_EXPORT CCylindricalSegmentFeatureDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricalSegmentFeatureDefinitionType(CCylindricalSegmentFeatureDefinitionType const& init);
	void operator=(CCylindricalSegmentFeatureDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricalSegmentFeatureDefinitionType); }
	MemberElement<t::CInternalExternalEnumTypeType, _altova_mi_t_altova_CCylindricalSegmentFeatureDefinitionType_altova_InternalExternal> InternalExternal;
	struct InternalExternal { typedef Iterator<t::CInternalExternalEnumTypeType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCylindricalSegmentFeatureDefinitionType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCylindricalSegmentFeatureDefinitionType_altova_Length> Length;
	struct Length { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CBottomType, _altova_mi_t_altova_CCylindricalSegmentFeatureDefinitionType_altova_Bottom> Bottom;
	struct Bottom { typedef Iterator<t::CBottomType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricalSegmentFeatureDefinitionType
