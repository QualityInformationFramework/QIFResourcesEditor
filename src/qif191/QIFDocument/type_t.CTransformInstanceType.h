#pragma once

#include "type_t.CTransformMatrixType.h"


namespace qif191
{

namespace t
{	

class CTransformInstanceType : public ::qif191::t::CTransformMatrixType
{
public:
	QIF191_EXPORT CTransformInstanceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTransformInstanceType(CTransformInstanceType const& init);
	void operator=(CTransformInstanceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTransformInstanceType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CTransformInstanceType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CTransformInstanceType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CTransformInstanceType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTransformInstanceType
