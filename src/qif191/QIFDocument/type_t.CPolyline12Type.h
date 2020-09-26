#pragma once

#include "type_t.CCurve12BaseType.h"


namespace qif191
{

namespace t
{	

class CPolyline12Type : public ::qif191::t::CCurve12BaseType
{
public:
	QIF191_EXPORT CPolyline12Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPolyline12Type(CPolyline12Type const& init);
	void operator=(CPolyline12Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPolyline12Type); }
	MemberElement<t::CPolyline12CoreType, _altova_mi_t_altova_CPolyline12Type_altova_Polyline12Core> Polyline12Core;
	struct Polyline12Core { typedef Iterator<t::CPolyline12CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPolyline12Type
