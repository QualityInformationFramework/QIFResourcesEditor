#pragma once



namespace qif191
{

namespace t
{	

class CPointCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CPointCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointCheckedType(CPointCheckedType const& init);
	void operator=(CPointCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CPointCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CPointConstructionMethodType, _altova_mi_t_altova_CPointCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CPointConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointCheckedType
