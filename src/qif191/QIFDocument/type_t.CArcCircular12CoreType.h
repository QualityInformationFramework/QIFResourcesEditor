#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CArcCircular12CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CArcCircular12CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcCircular12CoreType(CArcCircular12CoreType const& init);
	void operator=(CArcCircular12CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcCircular12CoreType); }

	MemberAttribute<bool,_altova_mi_t_altova_CArcCircular12CoreType_altova_Turned, 0, 0> Turned;	// Turned Cboolean
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CArcCircular12CoreType_altova_Radius> Radius;
	struct Radius { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CArcCircular12CoreType_altova_Center> Center;
	struct Center { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	MemberElement<t::CUnitVector2dSimpleTypeType, _altova_mi_t_altova_CArcCircular12CoreType_altova_DirBeg> DirBeg;
	struct DirBeg { typedef Iterator<t::CUnitVector2dSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcCircular12CoreType
