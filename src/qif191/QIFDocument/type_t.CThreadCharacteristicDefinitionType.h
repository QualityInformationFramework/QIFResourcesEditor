#pragma once

#include "type_t.CCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CThreadCharacteristicDefinitionType : public ::qif191::t::CCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CThreadCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadCharacteristicDefinitionType(CThreadCharacteristicDefinitionType const& init);
	void operator=(CThreadCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadCharacteristicDefinitionType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CThreadCharacteristicDefinitionType_altova_ThreadSpecificationId> ThreadSpecificationId;
	struct ThreadSpecificationId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadCharacteristicDefinitionType
