#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CPolyline13CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CPolyline13CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPolyline13CoreType(CPolyline13CoreType const& init);
	void operator=(CPolyline13CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPolyline13CoreType); }
	MemberElement<t::CArrayPointType, _altova_mi_t_altova_CPolyline13CoreType_altova_Points> Points;
	struct Points { typedef Iterator<t::CArrayPointType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CPolyline13CoreType_altova_PointsBinary> PointsBinary;
	struct PointsBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPolyline13CoreType
