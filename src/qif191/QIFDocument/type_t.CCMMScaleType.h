#pragma once



namespace qif191
{

namespace t
{	

class CCMMScaleType : public TypeBase
{
public:
	QIF191_EXPORT CCMMScaleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMScaleType(CCMMScaleType const& init);
	void operator=(CCMMScaleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCMMScaleType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCMMScaleType_altova_ScaleMaterial> ScaleMaterial;
	struct ScaleMaterial { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CCMMScaleType_altova_ScaleCoefficientOfExpansion> ScaleCoefficientOfExpansion;
	struct ScaleCoefficientOfExpansion { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CCMMScaleType_altova_ScaleCoefficientOfExpansionUncertainty> ScaleCoefficientOfExpansionUncertainty;
	struct ScaleCoefficientOfExpansionUncertainty { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCMMScaleType_altova_TypeOfScale> TypeOfScale;
	struct TypeOfScale { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCMMScaleType_altova_ScaleResolution> ScaleResolution;
	struct ScaleResolution { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMScaleType
