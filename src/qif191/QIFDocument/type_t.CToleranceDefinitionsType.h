#pragma once



namespace qif191
{

namespace t
{	

class CToleranceDefinitionsType : public TypeBase
{
public:
	QIF191_EXPORT CToleranceDefinitionsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToleranceDefinitionsType(CToleranceDefinitionsType const& init);
	void operator=(CToleranceDefinitionsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToleranceDefinitionsType); }
	MemberElement<t::CLinearToleranceDefinitionType, _altova_mi_t_altova_CToleranceDefinitionsType_altova_LinearTolerance> LinearTolerance;
	struct LinearTolerance { typedef Iterator<t::CLinearToleranceDefinitionType> iterator; };
	MemberElement<t::CAngularToleranceDefinitionType, _altova_mi_t_altova_CToleranceDefinitionsType_altova_AngularTolerance> AngularTolerance;
	struct AngularTolerance { typedef Iterator<t::CAngularToleranceDefinitionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToleranceDefinitionsType
