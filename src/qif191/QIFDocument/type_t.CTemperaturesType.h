#pragma once



namespace qif191
{

namespace t
{	

class CTemperaturesType : public TypeBase
{
public:
	QIF191_EXPORT CTemperaturesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTemperaturesType(CTemperaturesType const& init);
	void operator=(CTemperaturesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTemperaturesType); }
	MemberElement<t::CTemperatureType, _altova_mi_t_altova_CTemperaturesType_altova_Temperature> Temperature;
	struct Temperature { typedef Iterator<t::CTemperatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTemperaturesType
