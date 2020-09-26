#pragma once

#include "type_t.CTopologyBaseType.h"


namespace qif191
{

namespace t
{	

class CFaceBaseType : public ::qif191::t::CTopologyBaseType
{
public:
	QIF191_EXPORT CFaceBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFaceBaseType(CFaceBaseType const& init);
	void operator=(CFaceBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFaceBaseType); }

	MemberAttribute<bool,_altova_mi_t_altova_CFaceBaseType_altova_Turned, 0, 0> Turned;	// Turned Cboolean

	MemberAttribute<double,_altova_mi_t_altova_CFaceBaseType_altova_Area, 0, 0> Area;	// Area Cdouble

	MemberAttribute<double,_altova_mi_t_altova_CFaceBaseType_altova_Volume, 0, 0> Volume;	// Volume Cdouble

	MemberAttribute<string_type,_altova_mi_t_altova_CFaceBaseType_altova_MassCenter, 0, 0> MassCenter;	// MassCenter CPointSimpleType
	MemberElement<t::CMatrix33Type, _altova_mi_t_altova_CFaceBaseType_altova_InertiaMatrix> InertiaMatrix;
	struct InertiaMatrix { typedef Iterator<t::CMatrix33Type> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFaceBaseType
