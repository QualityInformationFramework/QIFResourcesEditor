#pragma once

#include "type_t.CDrawableBaseType.h"


namespace qif191
{

namespace t
{	

class CCADCoordinateSystemType : public ::qif191::t::CDrawableBaseType
{
public:
	QIF191_EXPORT CCADCoordinateSystemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCADCoordinateSystemType(CCADCoordinateSystemType const& init);
	void operator=(CCADCoordinateSystemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCADCoordinateSystemType); }
	MemberElement<t::CCoordinateSystemCoreType, _altova_mi_t_altova_CCADCoordinateSystemType_altova_CoordinateSystemCore> CoordinateSystemCore;
	struct CoordinateSystemCore { typedef Iterator<t::CCoordinateSystemCoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCADCoordinateSystemType
