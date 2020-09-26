#pragma once



namespace qif191
{

namespace t
{	

class CCircularUnitAreaType : public TypeBase
{
public:
	QIF191_EXPORT CCircularUnitAreaType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularUnitAreaType(CCircularUnitAreaType const& init);
	void operator=(CCircularUnitAreaType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularUnitAreaType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCircularUnitAreaType_altova_CircularUnitAreaDiameter> CircularUnitAreaDiameter;
	struct CircularUnitAreaDiameter { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularUnitAreaType
