#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CExtrudedCrossSectionFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CExtrudedCrossSectionFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrudedCrossSectionFeatureNominalType(CExtrudedCrossSectionFeatureNominalType const& init);
	void operator=(CExtrudedCrossSectionFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrudedCrossSectionFeatureNominalType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CExtrudedCrossSectionFeatureNominalType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CExtrudedCrossSectionFeatureNominalType_altova_CrossSectionReferenceFeatureId> CrossSectionReferenceFeatureId;
	struct CrossSectionReferenceFeatureId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrudedCrossSectionFeatureNominalType
