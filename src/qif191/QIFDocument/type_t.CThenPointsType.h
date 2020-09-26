#pragma once



namespace qif191
{

namespace t
{	

class CThenPointsType : public TypeBase
{
public:
	QIF191_EXPORT CThenPointsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThenPointsType(CThenPointsType const& init);
	void operator=(CThenPointsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThenPointsType); }
	MemberElement<xs::CunsignedIntType, _altova_mi_t_altova_CThenPointsType_altova_NumberOfPoints> NumberOfPoints;
	struct NumberOfPoints { typedef Iterator<xs::CunsignedIntType> iterator; };
	MemberElement<xs::CunsignedIntType, _altova_mi_t_altova_CThenPointsType_altova_MinPoints> MinPoints;
	struct MinPoints { typedef Iterator<xs::CunsignedIntType> iterator; };
	MemberElement<t::CPositiveDecimalTypeType, _altova_mi_t_altova_CThenPointsType_altova_PointDensity> PointDensity;
	struct PointDensity { typedef Iterator<t::CPositiveDecimalTypeType> iterator; };
	MemberElement<t::CPositiveDecimalTypeType, _altova_mi_t_altova_CThenPointsType_altova_MinPointDensity> MinPointDensity;
	struct MinPointDensity { typedef Iterator<t::CPositiveDecimalTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThenPointsType
