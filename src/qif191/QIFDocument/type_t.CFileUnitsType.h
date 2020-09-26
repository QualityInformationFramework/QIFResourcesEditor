#pragma once



namespace qif191
{

namespace t
{	

class CFileUnitsType : public TypeBase
{
public:
	QIF191_EXPORT CFileUnitsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFileUnitsType(CFileUnitsType const& init);
	void operator=(CFileUnitsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFileUnitsType); }
	MemberElement<t::CPrimaryUnitsType, _altova_mi_t_altova_CFileUnitsType_altova_PrimaryUnits> PrimaryUnits;
	struct PrimaryUnits { typedef Iterator<t::CPrimaryUnitsType> iterator; };
	MemberElement<t::COtherUnitsType, _altova_mi_t_altova_CFileUnitsType_altova_OtherUnits> OtherUnits;
	struct OtherUnits { typedef Iterator<t::COtherUnitsType> iterator; };
	MemberElement<t::CUserDefinedUnitsType, _altova_mi_t_altova_CFileUnitsType_altova_UserDefinedUnits> UserDefinedUnits;
	struct UserDefinedUnits { typedef Iterator<t::CUserDefinedUnitsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFileUnitsType
