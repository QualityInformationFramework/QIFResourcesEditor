#pragma once

#include "type_t.CGeometryBaseType.h"


namespace qif191
{

namespace t
{	

class CPathTriangulationType : public ::qif191::t::CGeometryBaseType
{
public:
	QIF191_EXPORT CPathTriangulationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPathTriangulationType(CPathTriangulationType const& init);
	void operator=(CPathTriangulationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPathTriangulationType); }
	MemberElement<t::CPathTriangulationCoreType, _altova_mi_t_altova_CPathTriangulationType_altova_PathTriangulationCore> PathTriangulationCore;
	struct PathTriangulationCore { typedef Iterator<t::CPathTriangulationCoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CPathTriangulationType_altova_MeshTriangle> MeshTriangle;
	struct MeshTriangle { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPathTriangulationType
