#pragma once

#include "type_t.CFrameType.h"


namespace qif191
{

namespace t
{	

class CFrameCircularType : public ::qif191::t::CFrameType
{
public:
	QIF191_EXPORT CFrameCircularType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFrameCircularType(CFrameCircularType const& init);
	void operator=(CFrameCircularType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFrameCircularType); }

	MemberAttribute<bool,_altova_mi_t_altova_CFrameCircularType_altova_Crossed, 0, 0> Crossed;	// Crossed Cboolean
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CFrameCircularType_altova_Radius> Radius;
	struct Radius { typedef Iterator<xs::CdoubleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFrameCircularType
