#pragma once



namespace qif191
{

namespace t
{	

class CActualAxisType : public TypeBase
{
public:
	QIF191_EXPORT CActualAxisType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualAxisType(CActualAxisType const& init);
	void operator=(CActualAxisType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualAxisType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CActualAxisType_altova_AxisPoint> AxisPoint;
	struct AxisPoint { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CActualAxisType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CActualUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualAxisType
