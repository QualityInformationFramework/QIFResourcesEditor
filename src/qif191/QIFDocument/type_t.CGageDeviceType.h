#pragma once

#include "type_t.CMeasurementDeviceType.h"


namespace qif191
{

namespace t
{	

class CGageDeviceType : public ::qif191::t::CMeasurementDeviceType
{
public:
	QIF191_EXPORT CGageDeviceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGageDeviceType(CGageDeviceType const& init);
	void operator=(CGageDeviceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGageDeviceType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGageDeviceType
