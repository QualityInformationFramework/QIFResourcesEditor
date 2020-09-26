#pragma once



namespace qif191
{

namespace t
{	

class CCorrectiveActionPlansType : public TypeBase
{
public:
	QIF191_EXPORT CCorrectiveActionPlansType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCorrectiveActionPlansType(CCorrectiveActionPlansType const& init);
	void operator=(CCorrectiveActionPlansType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCorrectiveActionPlansType); }
	MemberElement<t::CCorrectiveActionPlanType, _altova_mi_t_altova_CCorrectiveActionPlansType_altova_CorrectiveActionPlan> CorrectiveActionPlan;
	struct CorrectiveActionPlan { typedef Iterator<t::CCorrectiveActionPlanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCorrectiveActionPlansType
