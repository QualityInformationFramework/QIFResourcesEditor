#pragma once



namespace qif191
{

namespace t
{	

class CAreaToleranceType : public TypeBase
{
public:
	QIF191_EXPORT CAreaToleranceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAreaToleranceType(CAreaToleranceType const& init);
	void operator=(CAreaToleranceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAreaToleranceType); }
	MemberElement<t::CAreaValueType, _altova_mi_t_altova_CAreaToleranceType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CAreaValueType> iterator; };
	MemberElement<t::CAreaValueType, _altova_mi_t_altova_CAreaToleranceType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CAreaValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CAreaToleranceType_altova_DefinedAsLimit> DefinedAsLimit;
	struct DefinedAsLimit { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAreaToleranceType
