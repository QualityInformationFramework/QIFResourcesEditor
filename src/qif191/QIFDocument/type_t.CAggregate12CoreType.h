#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CAggregate12CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CAggregate12CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAggregate12CoreType(CAggregate12CoreType const& init);
	void operator=(CAggregate12CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAggregate12CoreType); }
	MemberElement<t::CArraySubCurve12Type, _altova_mi_t_altova_CAggregate12CoreType_altova_SubCurves> SubCurves;
	struct SubCurves { typedef Iterator<t::CArraySubCurve12Type> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAggregate12CoreType
