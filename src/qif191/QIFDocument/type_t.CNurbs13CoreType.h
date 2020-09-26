#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CNurbs13CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CNurbs13CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNurbs13CoreType(CNurbs13CoreType const& init);
	void operator=(CNurbs13CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNurbs13CoreType); }
	MemberElement<t::CNaturalTypeType, _altova_mi_t_altova_CNurbs13CoreType_altova_Order> Order;
	struct Order { typedef Iterator<t::CNaturalTypeType> iterator; };
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CNurbs13CoreType_altova_Knots> Knots;
	struct Knots { typedef Iterator<t::CArrayDoubleType> iterator; };
	MemberElement<t::CArrayPointType, _altova_mi_t_altova_CNurbs13CoreType_altova_CPs> CPs;
	struct CPs { typedef Iterator<t::CArrayPointType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CNurbs13CoreType_altova_CPsBinary> CPsBinary;
	struct CPsBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayDoubleType, _altova_mi_t_altova_CNurbs13CoreType_altova_Weights> Weights;
	struct Weights { typedef Iterator<t::CArrayDoubleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNurbs13CoreType
