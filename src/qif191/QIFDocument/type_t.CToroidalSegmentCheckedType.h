#pragma once



namespace qif191
{

namespace t
{	

class CToroidalSegmentCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CToroidalSegmentCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToroidalSegmentCheckedType(CToroidalSegmentCheckedType const& init);
	void operator=(CToroidalSegmentCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToroidalSegmentCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CToroidalSegmentCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CToroidalSegmentConstructionMethodType, _altova_mi_t_altova_CToroidalSegmentCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CToroidalSegmentConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToroidalSegmentCheckedType
