#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CNurbs12CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CNurbs12CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNurbs12CoreType(CNurbs12CoreType const& init);
	void operator=(CNurbs12CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNurbs12CoreType); }
	MemberElement<t::CNaturalTypeType, _altova_mi_t_altova_CNurbs12CoreType_altova_Order> Order;
	struct Order { typedef Iterator<t::CNaturalTypeType> iterator; };
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CNurbs12CoreType_altova_Knots> Knots;
	struct Knots { typedef Iterator<t::CArrayDoubleType> iterator; };
	MemberElement<t::CArrayPoint2dType, _altova_mi_t_altova_CNurbs12CoreType_altova_CPs> CPs;
	struct CPs { typedef Iterator<t::CArrayPoint2dType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CNurbs12CoreType_altova_CPsBinary> CPsBinary;
	struct CPsBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CNurbs12CoreType_altova_Weights> Weights;
	struct Weights { typedef Iterator<t::CArrayDoubleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNurbs12CoreType
