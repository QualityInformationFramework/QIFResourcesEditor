#pragma once



namespace qif191
{

namespace t
{	

class CEmployeeType : public TypeBase
{
public:
	QIF191_EXPORT CEmployeeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEmployeeType(CEmployeeType const& init);
	void operator=(CEmployeeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEmployeeType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CEmployeeType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CEmployeeType_altova_EmployeeId> EmployeeId;
	struct EmployeeId { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CEmployeeType_altova_Shift> Shift;
	struct Shift { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEmployeeType
