#pragma once



namespace qif191
{

namespace t
{	

class CActualComponentSetType : public TypeBase
{
public:
	QIF191_EXPORT CActualComponentSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualComponentSetType(CActualComponentSetType const& init);
	void operator=(CActualComponentSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualComponentSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CActualComponentSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CActualComponentType, _altova_mi_t_altova_CActualComponentSetType_altova_ActualComponent> ActualComponent;
	struct ActualComponent { typedef Iterator<t::CActualComponentType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualComponentSetType
