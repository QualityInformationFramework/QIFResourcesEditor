#pragma once



namespace qif191
{

namespace t
{	

class CAngularToleranceDefinitionType : public TypeBase
{
public:
	QIF191_EXPORT CAngularToleranceDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularToleranceDefinitionType(CAngularToleranceDefinitionType const& init);
	void operator=(CAngularToleranceDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularToleranceDefinitionType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CAngularToleranceDefinitionType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CAngularToleranceDefinitionType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CAngularToleranceDefinitionType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CAngularToleranceDefinitionType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CAngularValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularToleranceDefinitionType
