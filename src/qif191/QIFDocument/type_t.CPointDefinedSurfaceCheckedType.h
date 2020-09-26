#pragma once



namespace qif191
{

namespace t
{	

class CPointDefinedSurfaceCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CPointDefinedSurfaceCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedSurfaceCheckedType(CPointDefinedSurfaceCheckedType const& init);
	void operator=(CPointDefinedSurfaceCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedSurfaceCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CPointDefinedSurfaceCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CPointDefinedSurfaceConstructionMethodType, _altova_mi_t_altova_CPointDefinedSurfaceCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CPointDefinedSurfaceConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedSurfaceCheckedType
