#pragma once



namespace qif191
{

namespace t
{	

class CCurveCoreBaseType : public TypeBase
{
public:
	QIF191_EXPORT CCurveCoreBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurveCoreBaseType(CCurveCoreBaseType const& init);
	void operator=(CCurveCoreBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurveCoreBaseType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCurveCoreBaseType_altova_Domain, 0, 0> Domain;	// Domain CParameterRangeType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurveCoreBaseType
