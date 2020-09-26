#pragma once

#include "type_t.CAuxiliaryBaseType.h"


namespace qif191
{

namespace t
{	

class CLineAuxiliaryType : public ::qif191::t::CAuxiliaryBaseType
{
public:
	QIF191_EXPORT CLineAuxiliaryType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineAuxiliaryType(CLineAuxiliaryType const& init);
	void operator=(CLineAuxiliaryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineAuxiliaryType); }
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CLineAuxiliaryType_altova_StartPoint> StartPoint;
	struct StartPoint { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CLineAuxiliaryType_altova_EndPoint> EndPoint;
	struct EndPoint { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineAuxiliaryType
