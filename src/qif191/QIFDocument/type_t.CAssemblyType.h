#pragma once

#include "type_t.CProductDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CAssemblyType : public ::qif191::t::CProductDefinitionBaseType
{
public:
	QIF191_EXPORT CAssemblyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAssemblyType(CAssemblyType const& init);
	void operator=(CAssemblyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAssemblyType); }
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CAssemblyType_altova_ComponentIds> ComponentIds;
	struct ComponentIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CInternalPartAssemblyType, _altova_mi_t_altova_CAssemblyType_altova_DefinitionInternal> DefinitionInternal;
	struct DefinitionInternal { typedef Iterator<t::CInternalPartAssemblyType> iterator; };
	MemberElement<t::CDefinitionExternalType, _altova_mi_t_altova_CAssemblyType_altova_DefinitionExternal> DefinitionExternal;
	struct DefinitionExternal { typedef Iterator<t::CDefinitionExternalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAssemblyType
