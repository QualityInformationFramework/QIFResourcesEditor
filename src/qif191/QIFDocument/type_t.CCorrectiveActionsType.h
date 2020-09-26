#pragma once



namespace qif191
{

namespace t
{	

class CCorrectiveActionsType : public TypeBase
{
public:
	QIF191_EXPORT CCorrectiveActionsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCorrectiveActionsType(CCorrectiveActionsType const& init);
	void operator=(CCorrectiveActionsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCorrectiveActionsType); }
	MemberElement<t::CCorrectiveActionType, _altova_mi_t_altova_CCorrectiveActionsType_altova_CorrectiveAction> CorrectiveAction;
	struct CorrectiveAction { typedef Iterator<t::CCorrectiveActionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCorrectiveActionsType
