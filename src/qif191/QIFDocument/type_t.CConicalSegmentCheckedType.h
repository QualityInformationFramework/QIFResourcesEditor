#pragma once



namespace qif191
{

namespace t
{	

class CConicalSegmentCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CConicalSegmentCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConicalSegmentCheckedType(CConicalSegmentCheckedType const& init);
	void operator=(CConicalSegmentCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConicalSegmentCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CConicalSegmentCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CConicalSegmentConstructionMethodType, _altova_mi_t_altova_CConicalSegmentCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CConicalSegmentConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConicalSegmentCheckedType
