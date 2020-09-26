#pragma once



namespace qif191
{

namespace t
{	

class CActualPointAndVectorType : public TypeBase
{
public:
	QIF191_EXPORT CActualPointAndVectorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualPointAndVectorType(CActualPointAndVectorType const& init);
	void operator=(CActualPointAndVectorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualPointAndVectorType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CActualPointAndVectorType_altova_StartPoint> StartPoint;
	struct StartPoint { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CActualPointAndVectorType_altova_Vector> Vector;
	struct Vector { typedef Iterator<t::CActualUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualPointAndVectorType
