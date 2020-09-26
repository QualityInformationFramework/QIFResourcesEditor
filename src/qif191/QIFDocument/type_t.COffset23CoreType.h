#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class COffset23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT COffset23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COffset23CoreType(COffset23CoreType const& init);
	void operator=(COffset23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COffset23CoreType); }
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_COffset23CoreType_altova_Distance> Distance;
	struct Distance { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<t::CSurfaceCoreType, _altova_mi_t_altova_COffset23CoreType_altova_Surface> Surface;
	struct Surface { typedef Iterator<t::CSurfaceCoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COffset23CoreType
