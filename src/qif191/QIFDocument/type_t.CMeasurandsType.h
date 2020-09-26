#pragma once



namespace qif191
{

namespace t
{	

class CMeasurandsType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurandsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurandsType(CMeasurandsType const& init);
	void operator=(CMeasurandsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurandsType); }
	MemberElement<t::CMeasurandBaseType, _altova_mi_t_altova_CMeasurandsType_altova_Measurand> Measurand;
	struct Measurand { typedef Iterator<t::CMeasurandBaseType> iterator; };
	MemberElement<t::CEstablishDatumMeasurandType, _altova_mi_t_altova_CMeasurandsType_altova_EstablishDatumMeasurand> EstablishDatumMeasurand;
	struct EstablishDatumMeasurand { typedef Iterator<t::CEstablishDatumMeasurandType> iterator; };
	MemberElement<t::CEvaluateCharacteristicMeasurandType, _altova_mi_t_altova_CMeasurandsType_altova_EvaluateCharacteristicMeasurand> EvaluateCharacteristicMeasurand;
	struct EvaluateCharacteristicMeasurand { typedef Iterator<t::CEvaluateCharacteristicMeasurandType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurandsType
