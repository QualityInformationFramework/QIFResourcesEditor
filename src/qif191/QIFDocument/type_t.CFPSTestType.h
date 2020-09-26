#pragma once

#include "type_t.CCMMAccuracyTestBaseType.h"


namespace qif191
{

namespace t
{	

class CFPSTestType : public ::qif191::t::CCMMAccuracyTestBaseType
{
public:
	QIF191_EXPORT CFPSTestType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFPSTestType(CFPSTestType const& init);
	void operator=(CFPSTestType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFPSTestType); }
	MemberElement<t::CLengthFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_XLinearity> XLinearity;
	struct XLinearity { typedef Iterator<t::CLengthFunctionDiscreteType> iterator; };
	MemberElement<t::CLengthFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_YLinearity> YLinearity;
	struct YLinearity { typedef Iterator<t::CLengthFunctionDiscreteType> iterator; };
	MemberElement<t::CLengthFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_ZLinearity> ZLinearity;
	struct ZLinearity { typedef Iterator<t::CLengthFunctionDiscreteType> iterator; };
	MemberElement<t::CAngleFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_XAxisRoll> XAxisRoll;
	struct XAxisRoll { typedef Iterator<t::CAngleFunctionDiscreteType> iterator; };
	MemberElement<t::CAngleFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_XAxisPitch> XAxisPitch;
	struct XAxisPitch { typedef Iterator<t::CAngleFunctionDiscreteType> iterator; };
	MemberElement<t::CAngleFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_XAxisYaw> XAxisYaw;
	struct XAxisYaw { typedef Iterator<t::CAngleFunctionDiscreteType> iterator; };
	MemberElement<t::CAngleFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_YAxisRoll> YAxisRoll;
	struct YAxisRoll { typedef Iterator<t::CAngleFunctionDiscreteType> iterator; };
	MemberElement<t::CAngleFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_YAxisPitch> YAxisPitch;
	struct YAxisPitch { typedef Iterator<t::CAngleFunctionDiscreteType> iterator; };
	MemberElement<t::CAngleFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_YAxisYaw> YAxisYaw;
	struct YAxisYaw { typedef Iterator<t::CAngleFunctionDiscreteType> iterator; };
	MemberElement<t::CAngleFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_ZAxisRoll> ZAxisRoll;
	struct ZAxisRoll { typedef Iterator<t::CAngleFunctionDiscreteType> iterator; };
	MemberElement<t::CAngleFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_ZAxisPitch> ZAxisPitch;
	struct ZAxisPitch { typedef Iterator<t::CAngleFunctionDiscreteType> iterator; };
	MemberElement<t::CAngleFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_ZAxisYaw> ZAxisYaw;
	struct ZAxisYaw { typedef Iterator<t::CAngleFunctionDiscreteType> iterator; };
	MemberElement<t::CLengthFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_XAxisStraightnessY> XAxisStraightnessY;
	struct XAxisStraightnessY { typedef Iterator<t::CLengthFunctionDiscreteType> iterator; };
	MemberElement<t::CLengthFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_XAxisStraightnessZ> XAxisStraightnessZ;
	struct XAxisStraightnessZ { typedef Iterator<t::CLengthFunctionDiscreteType> iterator; };
	MemberElement<t::CLengthFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_YAxisStraightnessX> YAxisStraightnessX;
	struct YAxisStraightnessX { typedef Iterator<t::CLengthFunctionDiscreteType> iterator; };
	MemberElement<t::CLengthFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_YAxisStraightnessZ> YAxisStraightnessZ;
	struct YAxisStraightnessZ { typedef Iterator<t::CLengthFunctionDiscreteType> iterator; };
	MemberElement<t::CLengthFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_ZAxisStraightnessX> ZAxisStraightnessX;
	struct ZAxisStraightnessX { typedef Iterator<t::CLengthFunctionDiscreteType> iterator; };
	MemberElement<t::CLengthFunctionDiscreteType, _altova_mi_t_altova_CFPSTestType_altova_ZAxisStraightnessY> ZAxisStraightnessY;
	struct ZAxisStraightnessY { typedef Iterator<t::CLengthFunctionDiscreteType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CFPSTestType_altova_XYSquareness> XYSquareness;
	struct XYSquareness { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CFPSTestType_altova_XZSquareness> XZSquareness;
	struct XZSquareness { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CFPSTestType_altova_YZSquareness> YZSquareness;
	struct YZSquareness { typedef Iterator<xs::CdoubleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFPSTestType
