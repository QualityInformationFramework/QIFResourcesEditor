#pragma once



namespace qif191
{

namespace t
{	

class CSignOffsType : public TypeBase
{
public:
	QIF191_EXPORT CSignOffsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSignOffsType(CSignOffsType const& init);
	void operator=(CSignOffsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSignOffsType); }
	MemberElement<t::CEmployeeType, _altova_mi_t_altova_CSignOffsType_altova_Employee> Employee;
	struct Employee { typedef Iterator<t::CEmployeeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSignOffsType
