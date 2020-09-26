#pragma once

#include "type_t.CAuxiliaryBaseType.h"


namespace qif191
{

namespace t
{	

class CPointAuxiliaryType : public ::qif191::t::CAuxiliaryBaseType
{
public:
	QIF191_EXPORT CPointAuxiliaryType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointAuxiliaryType(CPointAuxiliaryType const& init);
	void operator=(CPointAuxiliaryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointAuxiliaryType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CPointAuxiliaryType_altova_XYZ> XYZ;
	struct XYZ { typedef Iterator<t::CPointType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointAuxiliaryType
