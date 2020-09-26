#pragma once

#include "type_t.CTopologyBaseType.h"


namespace qif191
{

namespace t
{	

class CBodyType : public ::qif191::t::CTopologyBaseType
{
public:
	QIF191_EXPORT CBodyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBodyType(CBodyType const& init);
	void operator=(CBodyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBodyType); }
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CBodyType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CBodyType_altova_ShellIds> ShellIds;
	struct ShellIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CBodyType_altova_FaceIds> FaceIds;
	struct FaceIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CBodyType_altova_LoopIds> LoopIds;
	struct LoopIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CBodyType_altova_EdgeIds> EdgeIds;
	struct EdgeIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CBodyType_altova_VertexIds> VertexIds;
	struct VertexIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBodyType
