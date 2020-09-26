#pragma once



namespace qif191
{

namespace t
{	

class CAxisType : public TypeBase
{
public:
	QIF191_EXPORT CAxisType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAxisType(CAxisType const& init);
	void operator=(CAxisType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAxisType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CAxisType_altova_AxisPoint> AxisPoint;
	struct AxisPoint { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CAxisType_altova_Direction> Direction;
	struct Direction { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAxisType
