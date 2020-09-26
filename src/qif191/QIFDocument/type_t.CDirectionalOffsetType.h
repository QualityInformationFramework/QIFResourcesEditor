#pragma once



namespace qif191
{

namespace t
{	

class CDirectionalOffsetType : public TypeBase
{
public:
	QIF191_EXPORT CDirectionalOffsetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDirectionalOffsetType(CDirectionalOffsetType const& init);
	void operator=(CDirectionalOffsetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDirectionalOffsetType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CDirectionalOffsetType_altova_Offset> Offset;
	struct Offset { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CDirectionalOffsetType_altova_NominalDirection> NominalDirection;
	struct NominalDirection { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CDirectionalOffsetType_altova_FeatureDirection> FeatureDirection;
	struct FeatureDirection { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDirectionalOffsetType
