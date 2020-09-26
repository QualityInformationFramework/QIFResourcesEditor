#pragma once



namespace qif191
{

namespace t
{	

class CEllipseConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CEllipseConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipseConstructionMethodType(CEllipseConstructionMethodType const& init);
	void operator=(CEllipseConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipseConstructionMethodType); }
	MemberElement<t::CEllipseBestFitType, _altova_mi_t_altova_CEllipseConstructionMethodType_altova_BestFit> BestFit;
	struct BestFit { typedef Iterator<t::CEllipseBestFitType> iterator; };
	MemberElement<t::CEllipseRecompType, _altova_mi_t_altova_CEllipseConstructionMethodType_altova_Recompensated> Recompensated;
	struct Recompensated { typedef Iterator<t::CEllipseRecompType> iterator; };
	MemberElement<t::CEllipseIntersectionType, _altova_mi_t_altova_CEllipseConstructionMethodType_altova_Intersection> Intersection;
	struct Intersection { typedef Iterator<t::CEllipseIntersectionType> iterator; };
	MemberElement<t::CEllipseProjectionType, _altova_mi_t_altova_CEllipseConstructionMethodType_altova_Projection> Projection;
	struct Projection { typedef Iterator<t::CEllipseProjectionType> iterator; };
	MemberElement<t::CEllipseCopyType, _altova_mi_t_altova_CEllipseConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CEllipseCopyType> iterator; };
	MemberElement<t::CEllipseCastType, _altova_mi_t_altova_CEllipseConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CEllipseCastType> iterator; };
	MemberElement<t::CEllipseTransformType, _altova_mi_t_altova_CEllipseConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CEllipseTransformType> iterator; };
	MemberElement<t::CEllipseFromScanType, _altova_mi_t_altova_CEllipseConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CEllipseFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipseConstructionMethodType
