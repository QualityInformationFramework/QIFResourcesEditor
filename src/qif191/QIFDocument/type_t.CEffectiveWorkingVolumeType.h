#pragma once



namespace qif191
{

namespace t
{	

class CEffectiveWorkingVolumeType : public TypeBase
{
public:
	QIF191_EXPORT CEffectiveWorkingVolumeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEffectiveWorkingVolumeType(CEffectiveWorkingVolumeType const& init);
	void operator=(CEffectiveWorkingVolumeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEffectiveWorkingVolumeType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CEffectiveWorkingVolumeType_altova_MinPoint> MinPoint;
	struct MinPoint { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CPointType, _altova_mi_t_altova_CEffectiveWorkingVolumeType_altova_MaxPoint> MaxPoint;
	struct MaxPoint { typedef Iterator<t::CPointType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEffectiveWorkingVolumeType
