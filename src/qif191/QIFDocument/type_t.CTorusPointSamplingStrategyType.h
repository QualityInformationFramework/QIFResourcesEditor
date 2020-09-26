#pragma once



namespace qif191
{

namespace t
{	

class CTorusPointSamplingStrategyType : public TypeBase
{
public:
	QIF191_EXPORT CTorusPointSamplingStrategyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorusPointSamplingStrategyType(CTorusPointSamplingStrategyType const& init);
	void operator=(CTorusPointSamplingStrategyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorusPointSamplingStrategyType); }
	MemberElement<t::CSurfaceOfRevolutionPointSamplingStrategyEnumTypeType, _altova_mi_t_altova_CTorusPointSamplingStrategyType_altova_PointSamplingStrategyEnum> PointSamplingStrategyEnum;
	struct PointSamplingStrategyEnum { typedef Iterator<t::CSurfaceOfRevolutionPointSamplingStrategyEnumTypeType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CTorusPointSamplingStrategyType_altova_UserDefinedStrategy> UserDefinedStrategy;
	struct UserDefinedStrategy { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorusPointSamplingStrategyType
