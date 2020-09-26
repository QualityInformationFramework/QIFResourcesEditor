#pragma once



namespace qif191
{

namespace t
{	

class CUserDefinedUnitType : public TypeBase
{
public:
	QIF191_EXPORT CUserDefinedUnitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedUnitType(CUserDefinedUnitType const& init);
	void operator=(CUserDefinedUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedUnitType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedUnitType_altova_WhatIsMeasured> WhatIsMeasured;
	struct WhatIsMeasured { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CUserDefinedUnitType_altova_UnitName> UnitName;
	struct UnitName { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedUnitType_altova_StandardName> StandardName;
	struct StandardName { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedUnitType
