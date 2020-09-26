#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CPlane23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT CPlane23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlane23CoreType(CPlane23CoreType const& init);
	void operator=(CPlane23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlane23CoreType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CPlane23CoreType_altova_DomainU, 0, 0> DomainU;	// DomainU CParameterRangeType

	MemberAttribute<string_type,_altova_mi_t_altova_CPlane23CoreType_altova_DomainV, 0, 0> DomainV;	// DomainV CParameterRangeType
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CPlane23CoreType_altova_Origin> Origin;
	struct Origin { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	MemberElement<t::CVectorSimpleTypeType, _altova_mi_t_altova_CPlane23CoreType_altova_DirU> DirU;
	struct DirU { typedef Iterator<t::CVectorSimpleTypeType> iterator; };
	MemberElement<t::CVectorSimpleTypeType, _altova_mi_t_altova_CPlane23CoreType_altova_DirV> DirV;
	struct DirV { typedef Iterator<t::CVectorSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlane23CoreType
