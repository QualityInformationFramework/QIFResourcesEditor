#pragma once



namespace qif191
{

namespace t
{	

class CTemperatureType : public TypeBase
{
public:
	QIF191_EXPORT CTemperatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTemperatureType(CTemperatureType const& init);
	void operator=(CTemperatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTemperatureType); }
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CTemperatureType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<t::CTemperatureValueType, _altova_mi_t_altova_CTemperatureType_altova_Temperature> Temperature;
	struct Temperature { typedef Iterator<t::CTemperatureValueType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_t_altova_CTemperatureType_altova_TimeStamp> TimeStamp;
	struct TimeStamp { typedef Iterator<xs::CdateTimeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTemperatureType
