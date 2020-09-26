#pragma once



namespace qif191
{

namespace t
{	

class CCorrectiveActionType : public TypeBase
{
public:
	QIF191_EXPORT CCorrectiveActionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCorrectiveActionType(CCorrectiveActionType const& init);
	void operator=(CCorrectiveActionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCorrectiveActionType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCorrectiveActionType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CCorrectiveActionType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCorrectiveActionType_altova_ActionToTake> ActionToTake;
	struct ActionToTake { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CActionToTakeEnumTypeType, _altova_mi_t_altova_CCorrectiveActionType_altova_ActionToTakeEnum> ActionToTakeEnum;
	struct ActionToTakeEnum { typedef Iterator<t::CActionToTakeEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCorrectiveActionType
