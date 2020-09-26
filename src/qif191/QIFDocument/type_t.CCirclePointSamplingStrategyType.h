#pragma once



namespace qif191
{

namespace t
{	

class CCirclePointSamplingStrategyType : public TypeBase
{
public:
	QIF191_EXPORT CCirclePointSamplingStrategyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCirclePointSamplingStrategyType(CCirclePointSamplingStrategyType const& init);
	void operator=(CCirclePointSamplingStrategyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCirclePointSamplingStrategyType); }
	MemberElement<t::CClosedCurvePointSamplingStrategyEnumTypeType, _altova_mi_t_altova_CCirclePointSamplingStrategyType_altova_PointSamplingStrategyEnum> PointSamplingStrategyEnum;
	struct PointSamplingStrategyEnum { typedef Iterator<t::CClosedCurvePointSamplingStrategyEnumTypeType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CCirclePointSamplingStrategyType_altova_UserDefinedStrategy> UserDefinedStrategy;
	struct UserDefinedStrategy { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCirclePointSamplingStrategyType
