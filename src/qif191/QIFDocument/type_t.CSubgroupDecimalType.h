#pragma once

#include "type_t.CActualDecimalType.h"


namespace qif191
{

namespace t
{	

class CSubgroupDecimalType : public ::qif191::t::CActualDecimalType
{
public:
	QIF191_EXPORT CSubgroupDecimalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSubgroupDecimalType(CSubgroupDecimalType const& init);
	void operator=(CSubgroupDecimalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSubgroupDecimalType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<unsigned,_altova_mi_t_altova_CSubgroupDecimalType_altova_subgroupId, 0, 0> subgroupId;	// subgroupId CQIFIdType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSubgroupDecimalType
