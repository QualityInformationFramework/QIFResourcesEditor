#pragma once



namespace qif191
{

namespace t
{	

class CZoneRadiiType : public TypeBase
{
public:
	QIF191_EXPORT CZoneRadiiType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CZoneRadiiType(CZoneRadiiType const& init);
	void operator=(CZoneRadiiType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CZoneRadiiType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CZoneRadiiType_altova_MinRadius> MinRadius;
	struct MinRadius { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CZoneRadiiType_altova_MaxRadius> MaxRadius;
	struct MaxRadius { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CZoneRadiiType
