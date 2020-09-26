#pragma once



namespace qif191
{

namespace t
{	

class CPressureToleranceType : public TypeBase
{
public:
	QIF191_EXPORT CPressureToleranceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPressureToleranceType(CPressureToleranceType const& init);
	void operator=(CPressureToleranceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPressureToleranceType); }
	MemberElement<t::CPressureValueType, _altova_mi_t_altova_CPressureToleranceType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CPressureValueType> iterator; };
	MemberElement<t::CPressureValueType, _altova_mi_t_altova_CPressureToleranceType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CPressureValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CPressureToleranceType_altova_DefinedAsLimit> DefinedAsLimit;
	struct DefinedAsLimit { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPressureToleranceType
