#pragma once



namespace qif191
{

namespace t
{	

class CRectangleType : public TypeBase
{
public:
	QIF191_EXPORT CRectangleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRectangleType(CRectangleType const& init);
	void operator=(CRectangleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRectangleType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CRectangleType_altova_Length> Length;
	struct Length { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CPointType, _altova_mi_t_altova_CRectangleType_altova_CornerPoint> CornerPoint;
	struct CornerPoint { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CRectangleType_altova_Width> Width;
	struct Width { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CRectangleType_altova_WidthDirection> WidthDirection;
	struct WidthDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CRectangleType_altova_LengthDirection> LengthDirection;
	struct LengthDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRectangleType
