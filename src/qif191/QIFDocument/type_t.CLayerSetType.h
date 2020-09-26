#pragma once



namespace qif191
{

namespace t
{	

class CLayerSetType : public TypeBase
{
public:
	QIF191_EXPORT CLayerSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLayerSetType(CLayerSetType const& init);
	void operator=(CLayerSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLayerSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CLayerSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CLayerType, _altova_mi_t_altova_CLayerSetType_altova_Layer> Layer;
	struct Layer { typedef Iterator<t::CLayerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLayerSetType
