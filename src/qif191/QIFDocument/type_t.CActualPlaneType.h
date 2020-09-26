#pragma once



namespace qif191
{

namespace t
{	

class CActualPlaneType : public TypeBase
{
public:
	QIF191_EXPORT CActualPlaneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualPlaneType(CActualPlaneType const& init);
	void operator=(CActualPlaneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualPlaneType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CActualPlaneType_altova_Point> Point;
	struct Point { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CActualPlaneType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CActualUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualPlaneType
