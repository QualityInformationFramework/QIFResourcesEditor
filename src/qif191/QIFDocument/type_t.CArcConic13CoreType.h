#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CArcConic13CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CArcConic13CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcConic13CoreType(CArcConic13CoreType const& init);
	void operator=(CArcConic13CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcConic13CoreType); }
	MemberAttribute<string_type,_altova_mi_t_altova_CArcConic13CoreType_altova_Form, 1, 3> Form;	// Form CArcConicFormEnumType
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CArcConic13CoreType_altova_A> A;
	struct A { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CArcConic13CoreType_altova_B> B;
	struct B { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CArcConic13CoreType_altova_Center> Center;
	struct Center { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	MemberElement<t::CUnitVectorSimpleTypeType, _altova_mi_t_altova_CArcConic13CoreType_altova_DirBeg> DirBeg;
	struct DirBeg { typedef Iterator<t::CUnitVectorSimpleTypeType> iterator; };
	MemberElement<t::CUnitVectorSimpleTypeType, _altova_mi_t_altova_CArcConic13CoreType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CUnitVectorSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcConic13CoreType
