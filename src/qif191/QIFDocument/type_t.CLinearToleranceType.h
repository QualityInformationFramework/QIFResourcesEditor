#pragma once



namespace qif191
{

namespace t
{	

class CLinearToleranceType : public TypeBase
{
public:
	QIF191_EXPORT CLinearToleranceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearToleranceType(CLinearToleranceType const& init);
	void operator=(CLinearToleranceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearToleranceType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CLinearToleranceType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CLinearToleranceType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CLinearToleranceType_altova_DefinitionId> DefinitionId;
	struct DefinitionId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CLinearToleranceType_altova_DefinedAsLimit> DefinedAsLimit;
	struct DefinedAsLimit { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearToleranceType
