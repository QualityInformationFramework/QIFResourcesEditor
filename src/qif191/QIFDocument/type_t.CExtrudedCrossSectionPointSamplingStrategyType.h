#pragma once



namespace qif191
{

namespace t
{	

class CExtrudedCrossSectionPointSamplingStrategyType : public TypeBase
{
public:
	QIF191_EXPORT CExtrudedCrossSectionPointSamplingStrategyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrudedCrossSectionPointSamplingStrategyType(CExtrudedCrossSectionPointSamplingStrategyType const& init);
	void operator=(CExtrudedCrossSectionPointSamplingStrategyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrudedCrossSectionPointSamplingStrategyType); }
	MemberElement<t::CExtrudedCrossSectionPointSamplingStrategyEnumTypeType, _altova_mi_t_altova_CExtrudedCrossSectionPointSamplingStrategyType_altova_PointSamplingStrategyEnum> PointSamplingStrategyEnum;
	struct PointSamplingStrategyEnum { typedef Iterator<t::CExtrudedCrossSectionPointSamplingStrategyEnumTypeType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CExtrudedCrossSectionPointSamplingStrategyType_altova_UserDefinedStrategy> UserDefinedStrategy;
	struct UserDefinedStrategy { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrudedCrossSectionPointSamplingStrategyType
