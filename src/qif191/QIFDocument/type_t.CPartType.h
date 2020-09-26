#pragma once

#include "type_t.CProductDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CPartType : public ::qif191::t::CProductDefinitionBaseType
{
public:
	QIF191_EXPORT CPartType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPartType(CPartType const& init);
	void operator=(CPartType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPartType); }
	MemberElement<t::CInternalPartAssemblyType, _altova_mi_t_altova_CPartType_altova_DefinitionInternal> DefinitionInternal;
	struct DefinitionInternal { typedef Iterator<t::CInternalPartAssemblyType> iterator; };
	MemberElement<t::CDefinitionExternalType, _altova_mi_t_altova_CPartType_altova_DefinitionExternal> DefinitionExternal;
	struct DefinitionExternal { typedef Iterator<t::CDefinitionExternalType> iterator; };
	MemberElement<t::CPartFamilyType, _altova_mi_t_altova_CPartType_altova_PartFamily> PartFamily;
	struct PartFamily { typedef Iterator<t::CPartFamilyType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPartType
