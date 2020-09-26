#pragma once

#include "type_t.CViewBaseType.h"


namespace qif191
{

namespace t
{	

class CCameraBaseType : public ::qif191::t::CViewBaseType
{
public:
	QIF191_EXPORT CCameraBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCameraBaseType(CCameraBaseType const& init);
	void operator=(CCameraBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCameraBaseType); }
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CCameraBaseType_altova_ViewPlaneOrigin> ViewPlaneOrigin;
	struct ViewPlaneOrigin { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	MemberElement<t::CQuaternionType, _altova_mi_t_altova_CCameraBaseType_altova_Orientation> Orientation;
	struct Orientation { typedef Iterator<t::CQuaternionType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CCameraBaseType_altova_Ratio> Ratio;
	struct Ratio { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CCameraBaseType_altova_Near> Near;
	struct Near { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CCameraBaseType_altova_Far> Far;
	struct Far { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CCameraBaseType_altova_Height> Height;
	struct Height { typedef Iterator<xs::CdoubleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCameraBaseType
