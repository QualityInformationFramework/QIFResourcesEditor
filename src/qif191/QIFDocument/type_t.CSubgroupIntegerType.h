#pragma once

#include "type_xs.CpositiveIntegerType.h"


namespace qif191
{

namespace t
{	

class CSubgroupIntegerType : public ::qif191::xs::CpositiveIntegerType
{
public:
	QIF191_EXPORT CSubgroupIntegerType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSubgroupIntegerType(CSubgroupIntegerType const& init);
	void operator=(CSubgroupIntegerType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSubgroupIntegerType); }
	QIF191_EXPORT void operator=(const unsigned __int64& value);

	MemberAttribute<unsigned,_altova_mi_t_altova_CSubgroupIntegerType_altova_subgroupId, 0, 0> subgroupId;	// subgroupId CQIFIdType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSubgroupIntegerType
