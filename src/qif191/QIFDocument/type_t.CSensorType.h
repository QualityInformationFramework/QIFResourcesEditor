#pragma once

#include "type_t.CMeasurementResourceBaseType.h"


namespace qif191
{

namespace t
{	

class CSensorType : public ::qif191::t::CMeasurementResourceBaseType
{
public:
	QIF191_EXPORT CSensorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSensorType(CSensorType const& init);
	void operator=(CSensorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSensorType); }
	MemberElement<t::CQualificationsType, _altova_mi_t_altova_CSensorType_altova_Qualifications> Qualifications;
	struct Qualifications { typedef Iterator<t::CQualificationsType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CSensorType_altova_AAngle> AAngle;
	struct AAngle { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CSensorType_altova_BAngle> BAngle;
	struct BAngle { typedef Iterator<t::CAngularValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSensorType
