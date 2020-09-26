#pragma once

#include "type_t.CActualPointWithNormalBaseType.h"


namespace qif191
{

namespace t
{	

class CTargetPointActualType : public ::qif191::t::CActualPointWithNormalBaseType
{
public:
	QIF191_EXPORT CTargetPointActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTargetPointActualType(CTargetPointActualType const& init);
	void operator=(CTargetPointActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTargetPointActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTargetPointActualType
