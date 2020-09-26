#pragma once



namespace qif191
{

namespace t
{	

class CTemperatureToleranceType : public TypeBase
{
public:
	QIF191_EXPORT CTemperatureToleranceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTemperatureToleranceType(CTemperatureToleranceType const& init);
	void operator=(CTemperatureToleranceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTemperatureToleranceType); }
	MemberElement<t::CTemperatureValueType, _altova_mi_t_altova_CTemperatureToleranceType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CTemperatureValueType> iterator; };
	MemberElement<t::CTemperatureValueType, _altova_mi_t_altova_CTemperatureToleranceType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CTemperatureValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CTemperatureToleranceType_altova_DefinedAsLimit> DefinedAsLimit;
	struct DefinedAsLimit { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTemperatureToleranceType
