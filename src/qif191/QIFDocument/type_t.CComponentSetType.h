#pragma once



namespace qif191
{

namespace t
{	

class CComponentSetType : public TypeBase
{
public:
	QIF191_EXPORT CComponentSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CComponentSetType(CComponentSetType const& init);
	void operator=(CComponentSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CComponentSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CComponentSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CComponentType, _altova_mi_t_altova_CComponentSetType_altova_Component> Component;
	struct Component { typedef Iterator<t::CComponentType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CComponentSetType
