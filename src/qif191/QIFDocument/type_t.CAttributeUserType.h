#pragma once

#include "type_t.CAttributeBaseType.h"


namespace qif191
{

namespace t
{	

class CAttributeUserType : public ::qif191::t::CAttributeBaseType
{
public:
	QIF191_EXPORT CAttributeUserType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAttributeUserType(CAttributeUserType const& init);
	void operator=(CAttributeUserType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAttributeUserType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CAttributeUserType_altova_NameUserAttribute, 0, 0> NameUserAttribute;	// NameUserAttribute Cstring
	MemberElement<t::CUserDataXMLType, _altova_mi_t_altova_CAttributeUserType_altova_UserDataXML> UserDataXML;
	struct UserDataXML { typedef Iterator<t::CUserDataXMLType> iterator; };
	MemberElement<t::CBinaryDataType, _altova_mi_t_altova_CAttributeUserType_altova_UserDataBinary> UserDataBinary;
	struct UserDataBinary { typedef Iterator<t::CBinaryDataType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAttributeUserType
