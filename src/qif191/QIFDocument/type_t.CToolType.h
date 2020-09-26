#pragma once

#include "type_t.CMeasurementResourceBaseType.h"


namespace qif191
{

namespace t
{	

class CToolType : public ::qif191::t::CMeasurementResourceBaseType
{
public:
	QIF191_EXPORT CToolType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToolType(CToolType const& init);
	void operator=(CToolType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToolType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CToolType_altova_SensorIds> SensorIds;
	struct SensorIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToolType
