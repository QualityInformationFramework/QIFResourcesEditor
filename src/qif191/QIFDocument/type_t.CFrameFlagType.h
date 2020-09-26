#pragma once

#include "type_t.CFrameRectangularType.h"


namespace qif191
{

namespace t
{	

class CFrameFlagType : public ::qif191::t::CFrameRectangularType
{
public:
	QIF191_EXPORT CFrameFlagType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFrameFlagType(CFrameFlagType const& init);
	void operator=(CFrameFlagType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFrameFlagType); }

	MemberAttribute<bool,_altova_mi_t_altova_CFrameFlagType_altova_Right, 0, 0> Right;	// Right Cboolean
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFrameFlagType
