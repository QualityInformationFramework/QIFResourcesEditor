#pragma once



namespace qif191
{

namespace t
{	

class CPointDefinedSurfacePointSamplingStrategyType : public TypeBase
{
public:
	QIF191_EXPORT CPointDefinedSurfacePointSamplingStrategyType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedSurfacePointSamplingStrategyType(CPointDefinedSurfacePointSamplingStrategyType const& init);
	void operator=(CPointDefinedSurfacePointSamplingStrategyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedSurfacePointSamplingStrategyType); }
	MemberElement<t::CPointDefinedPointSamplingStrategyEnumTypeType, _altova_mi_t_altova_CPointDefinedSurfacePointSamplingStrategyType_altova_PointSamplingStrategyEnum> PointSamplingStrategyEnum;
	struct PointSamplingStrategyEnum { typedef Iterator<t::CPointDefinedPointSamplingStrategyEnumTypeType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CPointDefinedSurfacePointSamplingStrategyType_altova_UserDefinedStrategy> UserDefinedStrategy;
	struct UserDefinedStrategy { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedSurfacePointSamplingStrategyType
