#pragma once



namespace qif191
{

namespace t
{	

class CUserDefinedUnitsType : public TypeBase
{
public:
	QIF191_EXPORT CUserDefinedUnitsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedUnitsType(CUserDefinedUnitsType const& init);
	void operator=(CUserDefinedUnitsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedUnitsType); }
	MemberElement<t::CUserDefinedUnitType, _altova_mi_t_altova_CUserDefinedUnitsType_altova_UserDefinedUnit> UserDefinedUnit;
	struct UserDefinedUnit { typedef Iterator<t::CUserDefinedUnitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedUnitsType
