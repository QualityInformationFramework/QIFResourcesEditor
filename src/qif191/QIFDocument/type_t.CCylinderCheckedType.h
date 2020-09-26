#pragma once



namespace qif191
{

namespace t
{	

class CCylinderCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CCylinderCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylinderCheckedType(CCylinderCheckedType const& init);
	void operator=(CCylinderCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylinderCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CCylinderCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CCylinderConstructionMethodType, _altova_mi_t_altova_CCylinderCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CCylinderConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylinderCheckedType
