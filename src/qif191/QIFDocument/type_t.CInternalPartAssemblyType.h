#pragma once

#include "type_t.CNodeBaseType.h"


namespace qif191
{

namespace t
{	

class CInternalPartAssemblyType : public ::qif191::t::CNodeBaseType
{
public:
	QIF191_EXPORT CInternalPartAssemblyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInternalPartAssemblyType(CInternalPartAssemblyType const& init);
	void operator=(CInternalPartAssemblyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CInternalPartAssemblyType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CInternalPartAssemblyType_altova_Color, 0, 0> Color;	// Color CColorType

	MemberAttribute<double,_altova_mi_t_altova_CInternalPartAssemblyType_altova_Transparency, 0, 0> Transparency;	// Transparency Cdouble

	MemberAttribute<bool,_altova_mi_t_altova_CInternalPartAssemblyType_altova_Hidden, 0, 0> Hidden;	// Hidden Cboolean

	MemberAttribute<double,_altova_mi_t_altova_CInternalPartAssemblyType_altova_Size, 0, 0> Size;	// Size CDoublePositiveType

	MemberAttribute<string_type,_altova_mi_t_altova_CInternalPartAssemblyType_altova_OriginMassProperty, 0, 0> OriginMassProperty;	// OriginMassProperty CPointSimpleType
	MemberElement<t::CInternalHeaderType, _altova_mi_t_altova_CInternalPartAssemblyType_altova_Header> Header;
	struct Header { typedef Iterator<t::CInternalHeaderType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CInternalPartAssemblyType_altova_BodyIds> BodyIds;
	struct BodyIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CInternalPartAssemblyType_altova_CoordinateSystemIds> CoordinateSystemIds;
	struct CoordinateSystemIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CInternalPartAssemblyType_altova_AuxiliaryIds> AuxiliaryIds;
	struct AuxiliaryIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CInternalPartAssemblyType_altova_ViewIds> ViewIds;
	struct ViewIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	MemberElement<t::CArrayReferenceType, _altova_mi_t_altova_CInternalPartAssemblyType_altova_PointCloudIds> PointCloudIds;
	struct PointCloudIds { typedef Iterator<t::CArrayReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInternalPartAssemblyType
