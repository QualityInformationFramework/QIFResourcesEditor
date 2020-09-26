#pragma once

#include "type_t.CTopologyBaseType.h"


namespace qif191
{

namespace t
{	

class CShellType : public ::qif191::t::CTopologyBaseType
{
public:
	QIF191_EXPORT CShellType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CShellType(CShellType const& init);
	void operator=(CShellType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CShellType); }

	MemberAttribute<bool,_altova_mi_t_altova_CShellType_altova_Turned, 0, 0> Turned;	// Turned Cboolean

	MemberAttribute<bool,_altova_mi_t_altova_CShellType_altova_Closed, 0, 0> Closed;	// Closed Cboolean
	MemberAttribute<string_type,_altova_mi_t_altova_CShellType_altova_Form, 1, 3> Form;	// Form CShellFormEnumType
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CShellType_altova_FaceIds> FaceIds;
	struct FaceIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CShellType
