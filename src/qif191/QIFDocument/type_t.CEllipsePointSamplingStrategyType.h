#pragma once



namespace qif191
{

namespace t
{	

class CEllipsePointSamplingStrategyType : public TypeBase
{
public:
	QIF191_EXPORT CEllipsePointSamplingStrategyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipsePointSamplingStrategyType(CEllipsePointSamplingStrategyType const& init);
	void operator=(CEllipsePointSamplingStrategyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipsePointSamplingStrategyType); }
	MemberElement<t::CClosedCurvePointSamplingStrategyEnumTypeType, _altova_mi_t_altova_CEllipsePointSamplingStrategyType_altova_PointSamplingStrategyEnum> PointSamplingStrategyEnum;
	struct PointSamplingStrategyEnum { typedef Iterator<t::CClosedCurvePointSamplingStrategyEnumTypeType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CEllipsePointSamplingStrategyType_altova_UserDefinedStrategy> UserDefinedStrategy;
	struct UserDefinedStrategy { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipsePointSamplingStrategyType
