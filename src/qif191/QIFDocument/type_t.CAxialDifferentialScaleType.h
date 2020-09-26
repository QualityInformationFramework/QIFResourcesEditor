#pragma once



namespace qif191
{

namespace t
{	

class CAxialDifferentialScaleType : public TypeBase
{
public:
	QIF191_EXPORT CAxialDifferentialScaleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAxialDifferentialScaleType(CAxialDifferentialScaleType const& init);
	void operator=(CAxialDifferentialScaleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAxialDifferentialScaleType); }
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CAxialDifferentialScaleType_altova_XScaleFactor> XScaleFactor;
	struct XScaleFactor { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CAxialDifferentialScaleType_altova_XaxisDirection> XaxisDirection;
	struct XaxisDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CAxialDifferentialScaleType_altova_YScaleFactor> YScaleFactor;
	struct YScaleFactor { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CAxialDifferentialScaleType_altova_YaxisDirection> YaxisDirection;
	struct YaxisDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CAxialDifferentialScaleType_altova_ZScaleFactor> ZScaleFactor;
	struct ZScaleFactor { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CAxialDifferentialScaleType_altova_ZaxisDirection> ZaxisDirection;
	struct ZaxisDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAxialDifferentialScaleType
