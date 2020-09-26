#pragma once



namespace qif191
{

namespace t
{	

class CEnvironmentType : public TypeBase
{
public:
	QIF191_EXPORT CEnvironmentType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEnvironmentType(CEnvironmentType const& init);
	void operator=(CEnvironmentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEnvironmentType); }
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CEnvironmentType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<t::CActualTemperatureValueType, _altova_mi_t_altova_CEnvironmentType_altova_ObjectTemperature> ObjectTemperature;
	struct ObjectTemperature { typedef Iterator<t::CActualTemperatureValueType> iterator; };
	MemberElement<t::CActualTemperatureValueType, _altova_mi_t_altova_CEnvironmentType_altova_AmbientTemperature> AmbientTemperature;
	struct AmbientTemperature { typedef Iterator<t::CActualTemperatureValueType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CEnvironmentType_altova_RelativeHumidity> RelativeHumidity;
	struct RelativeHumidity { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_t_altova_CEnvironmentType_altova_DateAndTime> DateAndTime;
	struct DateAndTime { typedef Iterator<xs::CdateTimeType> iterator; };
	MemberElement<t::CTimeDescriptionType, _altova_mi_t_altova_CEnvironmentType_altova_TimeDescription> TimeDescription;
	struct TimeDescription { typedef Iterator<t::CTimeDescriptionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEnvironmentType
