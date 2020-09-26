#pragma once

#include "type_t.CGeometryBaseType.h"


namespace qif191
{

namespace t
{	

class CMeshTriangleType : public ::qif191::t::CGeometryBaseType
{
public:
	QIF191_EXPORT CMeshTriangleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeshTriangleType(CMeshTriangleType const& init);
	void operator=(CMeshTriangleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeshTriangleType); }
	MemberElement<t::CMeshTriangleCoreType, _altova_mi_t_altova_CMeshTriangleType_altova_MeshTriangleCore> MeshTriangleCore;
	struct MeshTriangleCore { typedef Iterator<t::CMeshTriangleCoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeshTriangleType
