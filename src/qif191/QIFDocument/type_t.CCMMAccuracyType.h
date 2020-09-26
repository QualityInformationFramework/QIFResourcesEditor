#pragma once

#include "type_t.CMeasurementDeviceAccuracyBaseType.h"


namespace qif191
{

namespace t
{	

class CCMMAccuracyType : public ::qif191::t::CMeasurementDeviceAccuracyBaseType
{
public:
	QIF191_EXPORT CCMMAccuracyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMAccuracyType(CCMMAccuracyType const& init);
	void operator=(CCMMAccuracyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCMMAccuracyType); }
	MemberElement<t::CTemperatureValueType, _altova_mi_t_altova_CCMMAccuracyType_altova_MinTemperature> MinTemperature;
	struct MinTemperature { typedef Iterator<t::CTemperatureValueType> iterator; };
	MemberElement<t::CTemperatureValueType, _altova_mi_t_altova_CCMMAccuracyType_altova_MaxTemperature> MaxTemperature;
	struct MaxTemperature { typedef Iterator<t::CTemperatureValueType> iterator; };
	MemberElement<t::CB89TestType, _altova_mi_t_altova_CCMMAccuracyType_altova_B89Test> B89Test;
	struct B89Test { typedef Iterator<t::CB89TestType> iterator; };
	MemberElement<t::CFPSTestType, _altova_mi_t_altova_CCMMAccuracyType_altova_FPSTest> FPSTest;
	struct FPSTest { typedef Iterator<t::CFPSTestType> iterator; };
	MemberElement<t::CISO10360TestType, _altova_mi_t_altova_CCMMAccuracyType_altova_ISO10360Test> ISO10360Test;
	struct ISO10360Test { typedef Iterator<t::CISO10360TestType> iterator; };
	MemberElement<t::CPointAccuracyTestType, _altova_mi_t_altova_CCMMAccuracyType_altova_PointAccuracyTest> PointAccuracyTest;
	struct PointAccuracyTest { typedef Iterator<t::CPointAccuracyTestType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMAccuracyType
