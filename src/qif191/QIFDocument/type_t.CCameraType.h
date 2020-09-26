#pragma once

#include "type_t.CCameraBaseType.h"


namespace qif191
{

namespace t
{	

class CCameraType : public ::qif191::t::CCameraBaseType
{
public:
	QIF191_EXPORT CCameraType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCameraType(CCameraType const& init);
	void operator=(CCameraType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCameraType); }
	MemberAttribute<string_type,_altova_mi_t_altova_CCameraType_altova_Form, 1, 2> Form;	// Form CCameraFormEnumType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCameraType
