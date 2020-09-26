#pragma once



namespace qif191
{

namespace t
{	

class CAssignableCausesType : public TypeBase
{
public:
	QIF191_EXPORT CAssignableCausesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAssignableCausesType(CAssignableCausesType const& init);
	void operator=(CAssignableCausesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAssignableCausesType); }
	MemberElement<t::CAssignableCauseType, _altova_mi_t_altova_CAssignableCausesType_altova_AssignableCause> AssignableCause;
	struct AssignableCause { typedef Iterator<t::CAssignableCauseType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAssignableCausesType
