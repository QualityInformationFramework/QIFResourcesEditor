#pragma once

#include "type_t.CLoopBaseType.h"


namespace qif191
{

namespace t
{	

class CLoopMeshType : public ::qif191::t::CLoopBaseType
{
public:
	QIF191_EXPORT CLoopMeshType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLoopMeshType(CLoopMeshType const& init);
	void operator=(CLoopMeshType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLoopMeshType); }
	MemberElement<t::CCoEdgesMeshType, _altova_mi_t_altova_CLoopMeshType_altova_CoEdgesMesh> CoEdgesMesh;
	struct CoEdgesMesh { typedef Iterator<t::CCoEdgesMeshType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLoopMeshType
