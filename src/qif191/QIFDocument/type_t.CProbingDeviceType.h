#pragma once

#include "type_t.CMeasurementDeviceType.h"


namespace qif191
{

namespace t
{	

class CProbingDeviceType : public ::qif191::t::CMeasurementDeviceType
{
public:
	QIF191_EXPORT CProbingDeviceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProbingDeviceType(CProbingDeviceType const& init);
	void operator=(CProbingDeviceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProbingDeviceType); }
	MemberElement<t::CWorkingVolumeType, _altova_mi_t_altova_CProbingDeviceType_altova_WorkingVolume> WorkingVolume;
	struct WorkingVolume { typedef Iterator<t::CWorkingVolumeType> iterator; };
	MemberElement<t::CEffectiveWorkingVolumeType, _altova_mi_t_altova_CProbingDeviceType_altova_EffectiveWorkingVolume> EffectiveWorkingVolume;
	struct EffectiveWorkingVolume { typedef Iterator<t::CEffectiveWorkingVolumeType> iterator; };
	MemberElement<t::CResolutionType, _altova_mi_t_altova_CProbingDeviceType_altova_Resolution> Resolution;
	struct Resolution { typedef Iterator<t::CResolutionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProbingDeviceType
