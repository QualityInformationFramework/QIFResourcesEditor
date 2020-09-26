#pragma once



namespace qif191
{

namespace t
{	

class CBaseFeaturePointListType : public TypeBase
{
public:
	QIF191_EXPORT CBaseFeaturePointListType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBaseFeaturePointListType(CBaseFeaturePointListType const& init);
	void operator=(CBaseFeaturePointListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBaseFeaturePointListType); }
	MemberElement<t::CBaseFeaturePointSetType, _altova_mi_t_altova_CBaseFeaturePointListType_altova_BaseFeaturePointSet> BaseFeaturePointSet;
	struct BaseFeaturePointSet { typedef Iterator<t::CBaseFeaturePointSetType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBaseFeaturePointListType
