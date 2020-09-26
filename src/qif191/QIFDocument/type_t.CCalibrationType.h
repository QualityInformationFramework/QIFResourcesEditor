#pragma once



namespace qif191
{

namespace t
{	

class CCalibrationType : public TypeBase
{
public:
	QIF191_EXPORT CCalibrationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCalibrationType(CCalibrationType const& init);
	void operator=(CCalibrationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCalibrationType); }
	MemberElement<t::CCalibrationMasterType, _altova_mi_t_altova_CCalibrationType_altova_CalibrationMaster> CalibrationMaster;
	struct CalibrationMaster { typedef Iterator<t::CCalibrationMasterType> iterator; };
	MemberElement<t::CTemperaturesType, _altova_mi_t_altova_CCalibrationType_altova_Temperatures> Temperatures;
	struct Temperatures { typedef Iterator<t::CTemperaturesType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_t_altova_CCalibrationType_altova_TimeStamp> TimeStamp;
	struct TimeStamp { typedef Iterator<xs::CdateTimeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCalibrationType
