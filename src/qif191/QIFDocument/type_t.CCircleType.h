#pragma once



namespace qif191
{

namespace t
{	

class CCircleType : public TypeBase
{
public:
	QIF191_EXPORT CCircleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircleType(CCircleType const& init);
	void operator=(CCircleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircleType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CCircleType_altova_CenterPoint> CenterPoint;
	struct CenterPoint { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCircleType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CCircleType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircleType
