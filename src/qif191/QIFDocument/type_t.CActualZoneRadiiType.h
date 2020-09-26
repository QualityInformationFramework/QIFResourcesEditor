#pragma once



namespace qif191
{

namespace t
{	

class CActualZoneRadiiType : public TypeBase
{
public:
	QIF191_EXPORT CActualZoneRadiiType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualZoneRadiiType(CActualZoneRadiiType const& init);
	void operator=(CActualZoneRadiiType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualZoneRadiiType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CActualZoneRadiiType_altova_MinRadius> MinRadius;
	struct MinRadius { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CActualZoneRadiiType_altova_MaxRadius> MaxRadius;
	struct MaxRadius { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualZoneRadiiType
