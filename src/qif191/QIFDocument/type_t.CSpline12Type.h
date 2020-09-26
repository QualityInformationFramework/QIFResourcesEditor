#pragma once

#include "type_t.CCurve12BaseType.h"


namespace qif191
{

namespace t
{	

class CSpline12Type : public ::qif191::t::CCurve12BaseType
{
public:
	QIF191_EXPORT CSpline12Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpline12Type(CSpline12Type const& init);
	void operator=(CSpline12Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpline12Type); }
	MemberElement<t::CSpline12CoreType, _altova_mi_t_altova_CSpline12Type_altova_Spline12Core> Spline12Core;
	struct Spline12Core { typedef Iterator<t::CSpline12CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpline12Type
