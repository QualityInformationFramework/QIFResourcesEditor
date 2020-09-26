#pragma once



namespace qif191
{

namespace t
{	

class CRectangularUnitAreaType : public TypeBase
{
public:
	QIF191_EXPORT CRectangularUnitAreaType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRectangularUnitAreaType(CRectangularUnitAreaType const& init);
	void operator=(CRectangularUnitAreaType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRectangularUnitAreaType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CRectangularUnitAreaType_altova_RectangularUnitAreaLength> RectangularUnitAreaLength;
	struct RectangularUnitAreaLength { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CRectangularUnitAreaType_altova_RectangularUnitAreaWidth> RectangularUnitAreaWidth;
	struct RectangularUnitAreaWidth { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CRectangularUnitAreaType_altova_RectangularUnitAreaOrientation> RectangularUnitAreaOrientation;
	struct RectangularUnitAreaOrientation { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRectangularUnitAreaType
