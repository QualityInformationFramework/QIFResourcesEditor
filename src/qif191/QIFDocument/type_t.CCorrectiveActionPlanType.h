#pragma once



namespace qif191
{

namespace t
{	

class CCorrectiveActionPlanType : public TypeBase
{
public:
	QIF191_EXPORT CCorrectiveActionPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCorrectiveActionPlanType(CCorrectiveActionPlanType const& init);
	void operator=(CCorrectiveActionPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCorrectiveActionPlanType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCorrectiveActionPlanType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAssignableCausesType, _altova_mi_t_altova_CCorrectiveActionPlanType_altova_AssignableCauses> AssignableCauses;
	struct AssignableCauses { typedef Iterator<t::CAssignableCausesType> iterator; };
	MemberElement<t::CCorrectiveActionsType, _altova_mi_t_altova_CCorrectiveActionPlanType_altova_CorrectiveActions> CorrectiveActions;
	struct CorrectiveActions { typedef Iterator<t::CCorrectiveActionsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCorrectiveActionPlanType
