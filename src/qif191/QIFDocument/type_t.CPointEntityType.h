#pragma once

#include "type_t.CGeometryBaseType.h"


namespace qif191
{

namespace t
{	

class CPointEntityType : public ::qif191::t::CGeometryBaseType
{
public:
	QIF191_EXPORT CPointEntityType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointEntityType(CPointEntityType const& init);
	void operator=(CPointEntityType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointEntityType); }
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CPointEntityType_altova_XYZ> XYZ;
	struct XYZ { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointEntityType
