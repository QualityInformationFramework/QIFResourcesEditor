#pragma once



namespace qif191
{

namespace t
{	

class CMeasuredFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CMeasuredFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasuredFeatureType(CMeasuredFeatureType const& init);
	void operator=(CMeasuredFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasuredFeatureType); }
	MemberElement<t::CPointListNominalType, _altova_mi_t_altova_CMeasuredFeatureType_altova_PointList> PointList;
	struct PointList { typedef Iterator<t::CPointListNominalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasuredFeatureType
