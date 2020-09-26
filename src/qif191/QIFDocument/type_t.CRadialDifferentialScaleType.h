#pragma once



namespace qif191
{

namespace t
{	

class CRadialDifferentialScaleType : public TypeBase
{
public:
	QIF191_EXPORT CRadialDifferentialScaleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRadialDifferentialScaleType(CRadialDifferentialScaleType const& init);
	void operator=(CRadialDifferentialScaleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRadialDifferentialScaleType); }
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CRadialDifferentialScaleType_altova_PerpendicularScaleFactor> PerpendicularScaleFactor;
	struct PerpendicularScaleFactor { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CRadialDifferentialScaleType_altova_ParallelScaleFactor> ParallelScaleFactor;
	struct ParallelScaleFactor { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CRadialDifferentialScaleType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRadialDifferentialScaleType
