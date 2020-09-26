#pragma once

#include "type_t.CDrawableBaseType.h"


namespace qif191
{

namespace t
{	

class CAuxiliaryBaseType : public ::qif191::t::CDrawableBaseType
{
public:
	QIF191_EXPORT CAuxiliaryBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAuxiliaryBaseType(CAuxiliaryBaseType const& init);
	void operator=(CAuxiliaryBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAuxiliaryBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAuxiliaryBaseType
