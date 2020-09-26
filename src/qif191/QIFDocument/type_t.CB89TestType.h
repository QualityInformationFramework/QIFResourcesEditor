#pragma once

#include "type_t.CCMMAccuracyTestBaseType.h"


namespace qif191
{

namespace t
{	

class CB89TestType : public ::qif191::t::CCMMAccuracyTestBaseType
{
public:
	QIF191_EXPORT CB89TestType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CB89TestType(CB89TestType const& init);
	void operator=(CB89TestType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CB89TestType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CB89TestType_altova_XLinearAccuracy> XLinearAccuracy;
	struct XLinearAccuracy { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CB89TestType_altova_YLinearAccuracy> YLinearAccuracy;
	struct YLinearAccuracy { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CB89TestType_altova_ZLinearAccuracy> ZLinearAccuracy;
	struct ZLinearAccuracy { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CB89TestType_altova_OffsetVolumetricPerformance> OffsetVolumetricPerformance;
	struct OffsetVolumetricPerformance { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CB89TestType_altova_VolumetricPerformance> VolumetricPerformance;
	struct VolumetricPerformance { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CB89TestType_altova_Repeatability> Repeatability;
	struct Repeatability { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CB89TestType
