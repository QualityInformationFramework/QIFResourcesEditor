#pragma once



namespace qif191
{

namespace t
{	

class CComponentType : public TypeBase
{
public:
	QIF191_EXPORT CComponentType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CComponentType(CComponentType const& init);
	void operator=(CComponentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CComponentType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CComponentType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CComponentType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<t::CQPIdTypeType, _altova_mi_t_altova_CComponentType_altova_QPId> QPId;
	struct QPId { typedef Iterator<t::CQPIdTypeType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CComponentType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CProductTraceabilityType, _altova_mi_t_altova_CComponentType_altova_Traceability> Traceability;
	struct Traceability { typedef Iterator<t::CProductTraceabilityType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CComponentType_altova_Part> Part;
	struct Part { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CComponentType_altova_Assembly> Assembly;
	struct Assembly { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CInternalComponentType, _altova_mi_t_altova_CComponentType_altova_DefinitionInternal> DefinitionInternal;
	struct DefinitionInternal { typedef Iterator<t::CInternalComponentType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CComponentType
