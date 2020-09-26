#pragma once



namespace qif191
{

namespace t
{	

class CPointAndVectorType : public TypeBase
{
public:
	QIF191_EXPORT CPointAndVectorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointAndVectorType(CPointAndVectorType const& init);
	void operator=(CPointAndVectorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointAndVectorType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CPointAndVectorType_altova_StartPoint> StartPoint;
	struct StartPoint { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPointAndVectorType_altova_Vector> Vector;
	struct Vector { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointAndVectorType
