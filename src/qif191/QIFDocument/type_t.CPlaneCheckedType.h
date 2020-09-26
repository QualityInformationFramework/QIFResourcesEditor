#pragma once



namespace qif191
{

namespace t
{	

class CPlaneCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CPlaneCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneCheckedType(CPlaneCheckedType const& init);
	void operator=(CPlaneCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CPlaneCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CPlaneConstructionMethodType, _altova_mi_t_altova_CPlaneCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CPlaneConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneCheckedType
