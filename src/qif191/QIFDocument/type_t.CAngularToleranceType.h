#pragma once



namespace qif191
{

namespace t
{	

class CAngularToleranceType : public TypeBase
{
public:
	QIF191_EXPORT CAngularToleranceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularToleranceType(CAngularToleranceType const& init);
	void operator=(CAngularToleranceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularToleranceType); }
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CAngularToleranceType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CAngularToleranceType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CAngularToleranceType_altova_DefinitionId> DefinitionId;
	struct DefinitionId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CAngularToleranceType_altova_DefinedAsLimit> DefinedAsLimit;
	struct DefinedAsLimit { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularToleranceType
