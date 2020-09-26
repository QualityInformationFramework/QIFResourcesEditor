#pragma once



namespace qif191
{

namespace t
{	

class CAttributesType : public TypeBase
{
public:
	QIF191_EXPORT CAttributesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAttributesType(CAttributesType const& init);
	void operator=(CAttributesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAttributesType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CAttributesType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CAttributeBaseType, _altova_mi_t_altova_CAttributesType_altova_Attribute> Attribute;
	struct Attribute { typedef Iterator<t::CAttributeBaseType> iterator; };
	MemberElement<t::CAttributeBoolType, _altova_mi_t_altova_CAttributesType_altova_AttributeBool> AttributeBool;
	struct AttributeBool { typedef Iterator<t::CAttributeBoolType> iterator; };
	MemberElement<t::CAttributeD3Type, _altova_mi_t_altova_CAttributesType_altova_AttributeD3> AttributeD3;
	struct AttributeD3 { typedef Iterator<t::CAttributeD3Type> iterator; };
	MemberElement<t::CAttributeI1Type, _altova_mi_t_altova_CAttributesType_altova_AttributeI1> AttributeI1;
	struct AttributeI1 { typedef Iterator<t::CAttributeI1Type> iterator; };
	MemberElement<t::CAttributeI2Type, _altova_mi_t_altova_CAttributesType_altova_AttributeI2> AttributeI2;
	struct AttributeI2 { typedef Iterator<t::CAttributeI2Type> iterator; };
	MemberElement<t::CAttributeQPIdType, _altova_mi_t_altova_CAttributesType_altova_AttributeQPId> AttributeQPId;
	struct AttributeQPId { typedef Iterator<t::CAttributeQPIdType> iterator; };
	MemberElement<t::CAttributeStrType, _altova_mi_t_altova_CAttributesType_altova_AttributeStr> AttributeStr;
	struct AttributeStr { typedef Iterator<t::CAttributeStrType> iterator; };
	MemberElement<t::CAttributeUserType, _altova_mi_t_altova_CAttributesType_altova_AttributeUser> AttributeUser;
	struct AttributeUser { typedef Iterator<t::CAttributeUserType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAttributesType
