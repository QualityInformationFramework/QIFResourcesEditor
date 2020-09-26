#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CNurbs23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT CNurbs23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNurbs23CoreType(CNurbs23CoreType const& init);
	void operator=(CNurbs23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNurbs23CoreType); }
	MemberElement<t::CNaturalTypeType, _altova_mi_t_altova_CNurbs23CoreType_altova_OrderU> OrderU;
	struct OrderU { typedef Iterator<t::CNaturalTypeType> iterator; };
	MemberElement<t::CNaturalTypeType, _altova_mi_t_altova_CNurbs23CoreType_altova_OrderV> OrderV;
	struct OrderV { typedef Iterator<t::CNaturalTypeType> iterator; };
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CNurbs23CoreType_altova_KnotsU> KnotsU;
	struct KnotsU { typedef Iterator<t::CArrayDoubleType> iterator; };
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CNurbs23CoreType_altova_KnotsV> KnotsV;
	struct KnotsV { typedef Iterator<t::CArrayDoubleType> iterator; };
	MemberElement<t::CArrayPointType, _altova_mi_t_altova_CNurbs23CoreType_altova_CPs> CPs;
	struct CPs { typedef Iterator<t::CArrayPointType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CNurbs23CoreType_altova_CPsBinary> CPsBinary;
	struct CPsBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CNurbs23CoreType_altova_Weights> Weights;
	struct Weights { typedef Iterator<t::CArrayDoubleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNurbs23CoreType
