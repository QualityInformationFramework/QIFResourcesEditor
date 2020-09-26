#pragma once



namespace qif191
{

namespace t
{	

class CIntersectionPlaneType : public TypeBase
{
public:
	QIF191_EXPORT CIntersectionPlaneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIntersectionPlaneType(CIntersectionPlaneType const& init);
	void operator=(CIntersectionPlaneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIntersectionPlaneType); }
	MemberElement<t::CIntersectionPlaneEnumTypeType, _altova_mi_t_altova_CIntersectionPlaneType_altova_IntersectionPlaneEnum> IntersectionPlaneEnum;
	struct IntersectionPlaneEnum { typedef Iterator<t::CIntersectionPlaneEnumTypeType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CIntersectionPlaneType_altova_DatumDefinitionId> DatumDefinitionId;
	struct DatumDefinitionId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIntersectionPlaneType
