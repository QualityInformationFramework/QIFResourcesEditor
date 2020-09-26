#pragma once



namespace qif191
{

namespace t
{	

class CActionMethodBaseType : public TypeBase
{
public:
	QIF191_EXPORT CActionMethodBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActionMethodBaseType(CActionMethodBaseType const& init);
	void operator=(CActionMethodBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActionMethodBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CActionMethodBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CActionMethodBaseType_altova_ChosenResourceIds> ChosenResourceIds;
	struct ChosenResourceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CActionMethodBaseType_altova_WorkInstructionIds> WorkInstructionIds;
	struct WorkInstructionIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActionMethodBaseType
