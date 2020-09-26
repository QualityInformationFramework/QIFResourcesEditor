#pragma once

#include "type_t.CMeasurementDeviceAccuracyBaseType.h"


namespace qif191
{

namespace t
{	

class CNumericalLengthAccuracyType : public ::qif191::t::CMeasurementDeviceAccuracyBaseType
{
public:
	QIF191_EXPORT CNumericalLengthAccuracyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNumericalLengthAccuracyType(CNumericalLengthAccuracyType const& init);
	void operator=(CNumericalLengthAccuracyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNumericalLengthAccuracyType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CNumericalLengthAccuracyType_altova_AccuracyValue> AccuracyValue;
	struct AccuracyValue { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNumericalLengthAccuracyType
