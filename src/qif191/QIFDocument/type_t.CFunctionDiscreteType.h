#pragma once



namespace qif191
{

namespace t
{	

class CFunctionDiscreteType : public TypeBase
{
public:
	QIF191_EXPORT CFunctionDiscreteType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFunctionDiscreteType(CFunctionDiscreteType const& init);
	void operator=(CFunctionDiscreteType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFunctionDiscreteType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CFunctionDiscreteType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CListDoubleTypeType, _altova_mi_t_altova_CFunctionDiscreteType_altova_DomainValues> DomainValues;
	struct DomainValues { typedef Iterator<t::CListDoubleTypeType> iterator; };
	MemberElement<t::CListDoubleTypeType, _altova_mi_t_altova_CFunctionDiscreteType_altova_RangeValues> RangeValues;
	struct RangeValues { typedef Iterator<t::CListDoubleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFunctionDiscreteType
