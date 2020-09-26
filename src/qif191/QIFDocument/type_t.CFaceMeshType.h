#pragma once

#include "type_t.CFaceBaseType.h"


namespace qif191
{

namespace t
{	

class CFaceMeshType : public ::qif191::t::CFaceBaseType
{
public:
	QIF191_EXPORT CFaceMeshType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFaceMeshType(CFaceMeshType const& init);
	void operator=(CFaceMeshType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFaceMeshType); }
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CFaceMeshType_altova_Mesh> Mesh;
	struct Mesh { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CFaceMeshType_altova_LoopIds> LoopIds;
	struct LoopIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CArrayIntType, _altova_mi_t_altova_CFaceMeshType_altova_Triangles> Triangles;
	struct Triangles { typedef Iterator<t::CArrayIntType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CFaceMeshType_altova_TrianglesBinary> TrianglesBinary;
	struct TrianglesBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayIntType, _altova_mi_t_altova_CFaceMeshType_altova_TrianglesVisible> TrianglesVisible;
	struct TrianglesVisible { typedef Iterator<t::CArrayIntType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CFaceMeshType_altova_TrianglesVisibleBinary> TrianglesVisibleBinary;
	struct TrianglesVisibleBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayIntType, _altova_mi_t_altova_CFaceMeshType_altova_TrianglesHidden> TrianglesHidden;
	struct TrianglesHidden { typedef Iterator<t::CArrayIntType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CFaceMeshType_altova_TrianglesHiddenBinary> TrianglesHiddenBinary;
	struct TrianglesHiddenBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayUnsignedByteType, _altova_mi_t_altova_CFaceMeshType_altova_TrianglesColor> TrianglesColor;
	struct TrianglesColor { typedef Iterator<t::CArrayUnsignedByteType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CFaceMeshType_altova_TrianglesColorBinary> TrianglesColorBinary;
	struct TrianglesColorBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFaceMeshType
