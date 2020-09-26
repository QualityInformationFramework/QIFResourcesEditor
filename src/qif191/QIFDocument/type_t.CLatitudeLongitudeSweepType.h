#pragma once



namespace qif191
{

namespace t
{	

class CLatitudeLongitudeSweepType : public TypeBase
{
public:
	QIF191_EXPORT CLatitudeLongitudeSweepType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLatitudeLongitudeSweepType(CLatitudeLongitudeSweepType const& init);
	void operator=(CLatitudeLongitudeSweepType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLatitudeLongitudeSweepType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CLatitudeLongitudeSweepType_altova_DirMeridianPrime> DirMeridianPrime;
	struct DirMeridianPrime { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CAngleRangeType, _altova_mi_t_altova_CLatitudeLongitudeSweepType_altova_DomainLatitude> DomainLatitude;
	struct DomainLatitude { typedef Iterator<t::CAngleRangeType> iterator; };
	MemberElement<t::CAngleRangeType, _altova_mi_t_altova_CLatitudeLongitudeSweepType_altova_DomainLongitude> DomainLongitude;
	struct DomainLongitude { typedef Iterator<t::CAngleRangeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLatitudeLongitudeSweepType
