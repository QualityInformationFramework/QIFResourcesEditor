#pragma once



namespace qif191
{

namespace t
{	

class CFeatureBaseType : public TypeBase
{
public:
	QIF191_EXPORT CFeatureBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureBaseType(CFeatureBaseType const& init);
	void operator=(CFeatureBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CFeatureBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CFeatureBaseType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureBaseType
