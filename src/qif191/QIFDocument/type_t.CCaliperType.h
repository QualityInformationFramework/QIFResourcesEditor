#pragma once

#include "type_t.CManualDeviceType.h"


namespace qif191
{

namespace t
{	

class CCaliperType : public ::qif191::t::CManualDeviceType
{
public:
	QIF191_EXPORT CCaliperType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCaliperType(CCaliperType const& init);
	void operator=(CCaliperType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCaliperType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCaliperType_altova_Resolution> Resolution;
	struct Resolution { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CNumericalLengthAccuracyType, _altova_mi_t_altova_CCaliperType_altova_Accuracy> Accuracy;
	struct Accuracy { typedef Iterator<t::CNumericalLengthAccuracyType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CCaliperType_altova_CanMeasureInnerD> CanMeasureInnerD;
	struct CanMeasureInnerD { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CCaliperType_altova_CanMeasureOuterD> CanMeasureOuterD;
	struct CanMeasureOuterD { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CCaliperType_altova_CanMeasureDepth> CanMeasureDepth;
	struct CanMeasureDepth { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCaliperType
