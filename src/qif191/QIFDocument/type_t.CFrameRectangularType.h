#pragma once

#include "type_t.CFrameType.h"


namespace qif191
{

namespace t
{	

class CFrameRectangularType : public ::qif191::t::CFrameType
{
public:
	QIF191_EXPORT CFrameRectangularType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFrameRectangularType(CFrameRectangularType const& init);
	void operator=(CFrameRectangularType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFrameRectangularType); }
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CFrameRectangularType_altova_Width> Width;
	struct Width { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CFrameRectangularType_altova_Height> Height;
	struct Height { typedef Iterator<xs::CdoubleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFrameRectangularType
