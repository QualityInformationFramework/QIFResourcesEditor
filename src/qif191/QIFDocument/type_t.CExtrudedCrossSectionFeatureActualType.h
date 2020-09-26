#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CExtrudedCrossSectionFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CExtrudedCrossSectionFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrudedCrossSectionFeatureActualType(CExtrudedCrossSectionFeatureActualType const& init);
	void operator=(CExtrudedCrossSectionFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrudedCrossSectionFeatureActualType); }
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CExtrudedCrossSectionFeatureActualType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CExtrudedCrossSectionFeatureActualType_altova_Length> Length;
	struct Length { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CExtrudedCrossSectionFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrudedCrossSectionFeatureActualType
