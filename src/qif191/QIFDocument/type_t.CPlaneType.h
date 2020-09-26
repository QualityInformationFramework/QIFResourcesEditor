#pragma once



namespace qif191
{

namespace t
{	

class CPlaneType : public TypeBase
{
public:
	QIF191_EXPORT CPlaneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneType(CPlaneType const& init);
	void operator=(CPlaneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CPlaneType_altova_Point> Point;
	struct Point { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPlaneType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneType
