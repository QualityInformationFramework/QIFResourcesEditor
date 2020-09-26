#pragma once



namespace qif191
{

namespace t
{	

class CStraightnessDiametricalZoneType : public TypeBase
{
public:
	QIF191_EXPORT CStraightnessDiametricalZoneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStraightnessDiametricalZoneType(CStraightnessDiametricalZoneType const& init);
	void operator=(CStraightnessDiametricalZoneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStraightnessDiametricalZoneType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStraightnessDiametricalZoneType
