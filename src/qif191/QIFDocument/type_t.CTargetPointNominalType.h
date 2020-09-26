#pragma once

#include "type_t.CPointWithNormalBaseType.h"


namespace qif191
{

namespace t
{	

class CTargetPointNominalType : public ::qif191::t::CPointWithNormalBaseType
{
public:
	QIF191_EXPORT CTargetPointNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTargetPointNominalType(CTargetPointNominalType const& init);
	void operator=(CTargetPointNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTargetPointNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTargetPointNominalType
