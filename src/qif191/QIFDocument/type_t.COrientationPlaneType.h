#pragma once



namespace qif191
{

namespace t
{	

class COrientationPlaneType : public TypeBase
{
public:
	QIF191_EXPORT COrientationPlaneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientationPlaneType(COrientationPlaneType const& init);
	void operator=(COrientationPlaneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COrientationPlaneType); }
	MemberElement<t::COrientationPlaneEnumTypeType, _altova_mi_t_altova_COrientationPlaneType_altova_OrientationPlaneEnum> OrientationPlaneEnum;
	struct OrientationPlaneEnum { typedef Iterator<t::COrientationPlaneEnumTypeType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_COrientationPlaneType_altova_DatumDefinitionId> DatumDefinitionId;
	struct DatumDefinitionId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientationPlaneType
