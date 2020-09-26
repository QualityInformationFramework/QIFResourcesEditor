#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CArcConic12CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CArcConic12CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcConic12CoreType(CArcConic12CoreType const& init);
	void operator=(CArcConic12CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcConic12CoreType); }
	MemberAttribute<string_type,_altova_mi_t_altova_CArcConic12CoreType_altova_Form, 1, 3> Form;	// Form CArcConicFormEnumType

	MemberAttribute<bool,_altova_mi_t_altova_CArcConic12CoreType_altova_Turned, 0, 0> Turned;	// Turned Cboolean
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CArcConic12CoreType_altova_A> A;
	struct A { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CArcConic12CoreType_altova_B> B;
	struct B { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CArcConic12CoreType_altova_Center> Center;
	struct Center { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	MemberElement<t::CUnitVector2dSimpleTypeType, _altova_mi_t_altova_CArcConic12CoreType_altova_DirBeg> DirBeg;
	struct DirBeg { typedef Iterator<t::CUnitVector2dSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcConic12CoreType
