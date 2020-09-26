#pragma once



namespace qif191
{

namespace t
{	

class CDistributionTransformationType : public TypeBase
{
public:
	QIF191_EXPORT CDistributionTransformationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDistributionTransformationType(CDistributionTransformationType const& init);
	void operator=(CDistributionTransformationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDistributionTransformationType); }
	MemberElement<t::CDistributionTransformationEnumTypeType, _altova_mi_t_altova_CDistributionTransformationType_altova_DistributionTransformationEnum> DistributionTransformationEnum;
	struct DistributionTransformationEnum { typedef Iterator<t::CDistributionTransformationEnumTypeType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CDistributionTransformationType_altova_BoxCoxTransformation> BoxCoxTransformation;
	struct BoxCoxTransformation { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CDistributionTransformationType_altova_OtherDistributionTransformation> OtherDistributionTransformation;
	struct OtherDistributionTransformation { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDistributionTransformationType
