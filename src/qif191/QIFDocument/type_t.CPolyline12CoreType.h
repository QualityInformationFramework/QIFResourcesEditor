#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CPolyline12CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CPolyline12CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPolyline12CoreType(CPolyline12CoreType const& init);
	void operator=(CPolyline12CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPolyline12CoreType); }
	MemberElement<t::CArrayPoint2dType, _altova_mi_t_altova_CPolyline12CoreType_altova_Points> Points;
	struct Points { typedef Iterator<t::CArrayPoint2dType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CPolyline12CoreType_altova_PointsBinary> PointsBinary;
	struct PointsBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPolyline12CoreType
