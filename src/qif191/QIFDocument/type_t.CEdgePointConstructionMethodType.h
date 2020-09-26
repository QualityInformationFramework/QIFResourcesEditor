#pragma once



namespace qif191
{

namespace t
{	

class CEdgePointConstructionMethodType : public TypeBase
{
public:
	QIF191_EXPORT CEdgePointConstructionMethodType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgePointConstructionMethodType(CEdgePointConstructionMethodType const& init);
	void operator=(CEdgePointConstructionMethodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgePointConstructionMethodType); }
	MemberElement<t::CEdgePointCopyType, _altova_mi_t_altova_CEdgePointConstructionMethodType_altova_Copy> Copy;
	struct Copy { typedef Iterator<t::CEdgePointCopyType> iterator; };
	MemberElement<t::CEdgePointCastType, _altova_mi_t_altova_CEdgePointConstructionMethodType_altova_Cast> Cast;
	struct Cast { typedef Iterator<t::CEdgePointCastType> iterator; };
	MemberElement<t::CEdgePointTransformType, _altova_mi_t_altova_CEdgePointConstructionMethodType_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CEdgePointTransformType> iterator; };
	MemberElement<t::CEdgePointFromScanType, _altova_mi_t_altova_CEdgePointConstructionMethodType_altova_FromScan> FromScan;
	struct FromScan { typedef Iterator<t::CEdgePointFromScanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgePointConstructionMethodType
