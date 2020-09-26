#pragma once

#include "type_t.CAlignmentOperationBaseType.h"


namespace qif191
{

namespace t
{	

class CMachineCoordinateSystemOperationType : public ::qif191::t::CAlignmentOperationBaseType
{
public:
	QIF191_EXPORT CMachineCoordinateSystemOperationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMachineCoordinateSystemOperationType(CMachineCoordinateSystemOperationType const& init);
	void operator=(CMachineCoordinateSystemOperationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMachineCoordinateSystemOperationType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMachineCoordinateSystemOperationType
