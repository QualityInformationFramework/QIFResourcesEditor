#pragma once



namespace qif191
{

namespace t
{	

class CMassToleranceType : public TypeBase
{
public:
	QIF191_EXPORT CMassToleranceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMassToleranceType(CMassToleranceType const& init);
	void operator=(CMassToleranceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMassToleranceType); }
	MemberElement<t::CMassValueType, _altova_mi_t_altova_CMassToleranceType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CMassValueType> iterator; };
	MemberElement<t::CMassValueType, _altova_mi_t_altova_CMassToleranceType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CMassValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CMassToleranceType_altova_DefinedAsLimit> DefinedAsLimit;
	struct DefinedAsLimit { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMassToleranceType
