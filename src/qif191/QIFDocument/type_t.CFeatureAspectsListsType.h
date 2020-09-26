#pragma once



namespace qif191
{

namespace t
{	

class CFeatureAspectsListsType : public TypeBase
{
public:
	QIF191_EXPORT CFeatureAspectsListsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureAspectsListsType(CFeatureAspectsListsType const& init);
	void operator=(CFeatureAspectsListsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureAspectsListsType); }
	MemberElement<t::CFeatureDefinitionsType, _altova_mi_t_altova_CFeatureAspectsListsType_altova_FeatureDefinitions> FeatureDefinitions;
	struct FeatureDefinitions { typedef Iterator<t::CFeatureDefinitionsType> iterator; };
	MemberElement<t::CFeatureNominalsType, _altova_mi_t_altova_CFeatureAspectsListsType_altova_FeatureNominals> FeatureNominals;
	struct FeatureNominals { typedef Iterator<t::CFeatureNominalsType> iterator; };
	MemberElement<t::CFeatureItemsType, _altova_mi_t_altova_CFeatureAspectsListsType_altova_FeatureItems> FeatureItems;
	struct FeatureItems { typedef Iterator<t::CFeatureItemsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureAspectsListsType
