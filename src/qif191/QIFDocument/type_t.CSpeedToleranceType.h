#pragma once



namespace qif191
{

namespace t
{	

class CSpeedToleranceType : public TypeBase
{
public:
	QIF191_EXPORT CSpeedToleranceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpeedToleranceType(CSpeedToleranceType const& init);
	void operator=(CSpeedToleranceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpeedToleranceType); }
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CSpeedToleranceType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CSpeedToleranceType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CSpeedToleranceType_altova_DefinedAsLimit> DefinedAsLimit;
	struct DefinedAsLimit { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpeedToleranceType
