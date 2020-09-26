#pragma once

#include "type_t.CDatumTargetDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDatumTargetIrregularAreaDefinitionType : public ::qif191::t::CDatumTargetDefinitionBaseType
{
public:
	QIF191_EXPORT CDatumTargetIrregularAreaDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTargetIrregularAreaDefinitionType(CDatumTargetIrregularAreaDefinitionType const& init);
	void operator=(CDatumTargetIrregularAreaDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTargetIrregularAreaDefinitionType); }
	MemberElement<t::CPolyLineType, _altova_mi_t_altova_CDatumTargetIrregularAreaDefinitionType_altova_Boundary> Boundary;
	struct Boundary { typedef Iterator<t::CPolyLineType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTargetIrregularAreaDefinitionType
