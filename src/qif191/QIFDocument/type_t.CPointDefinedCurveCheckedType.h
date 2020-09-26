#pragma once



namespace qif191
{

namespace t
{	

class CPointDefinedCurveCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CPointDefinedCurveCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedCurveCheckedType(CPointDefinedCurveCheckedType const& init);
	void operator=(CPointDefinedCurveCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedCurveCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CPointDefinedCurveCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CPointDefinedCurveConstructionMethodType, _altova_mi_t_altova_CPointDefinedCurveCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CPointDefinedCurveConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedCurveCheckedType
