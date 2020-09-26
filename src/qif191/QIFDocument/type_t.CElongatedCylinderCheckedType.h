#pragma once



namespace qif191
{

namespace t
{	

class CElongatedCylinderCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CElongatedCylinderCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElongatedCylinderCheckedType(CElongatedCylinderCheckedType const& init);
	void operator=(CElongatedCylinderCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElongatedCylinderCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CElongatedCylinderCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CElongatedCylinderConstructionMethodType, _altova_mi_t_altova_CElongatedCylinderCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CElongatedCylinderConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElongatedCylinderCheckedType
