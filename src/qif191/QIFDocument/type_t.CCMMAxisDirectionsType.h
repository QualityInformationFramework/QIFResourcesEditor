#pragma once



namespace qif191
{

namespace t
{	

class CCMMAxisDirectionsType : public TypeBase
{
public:
	QIF191_EXPORT CCMMAxisDirectionsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMAxisDirectionsType(CCMMAxisDirectionsType const& init);
	void operator=(CCMMAxisDirectionsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCMMAxisDirectionsType); }
	MemberElement<t::CCMMDirectionEnumTypeType, _altova_mi_t_altova_CCMMAxisDirectionsType_altova_XAxisDirection> XAxisDirection;
	struct XAxisDirection { typedef Iterator<t::CCMMDirectionEnumTypeType> iterator; };
	MemberElement<t::CCMMDirectionEnumTypeType, _altova_mi_t_altova_CCMMAxisDirectionsType_altova_YAxisDirection> YAxisDirection;
	struct YAxisDirection { typedef Iterator<t::CCMMDirectionEnumTypeType> iterator; };
	MemberElement<t::CCMMDirectionEnumTypeType, _altova_mi_t_altova_CCMMAxisDirectionsType_altova_ZAxisDirection> ZAxisDirection;
	struct ZAxisDirection { typedef Iterator<t::CCMMDirectionEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMAxisDirectionsType
