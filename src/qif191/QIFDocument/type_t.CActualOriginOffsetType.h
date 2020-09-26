#pragma once



namespace qif191
{

namespace t
{	

class CActualOriginOffsetType : public TypeBase
{
public:
	QIF191_EXPORT CActualOriginOffsetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualOriginOffsetType(CActualOriginOffsetType const& init);
	void operator=(CActualOriginOffsetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualOriginOffsetType); }
	MemberElement<t::CAlignmentFeatureType, _altova_mi_t_altova_CActualOriginOffsetType_altova_OriginEntity> OriginEntity;
	struct OriginEntity { typedef Iterator<t::CAlignmentFeatureType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CActualOriginOffsetType_altova_OriginDirection> OriginDirection;
	struct OriginDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualOriginOffsetType
